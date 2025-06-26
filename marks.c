#include <stdio.h>

int main() {
    int n;          // total marks ki sankhya
    int mark;       // ek-ek mark input karenge
    int passCount = 0;  // pass hone walon ka count
    int topper=-11;    // sabse jyada marks
    int loser;    // sabse kam marks

    printf("Kitne marks input karoge? ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Number of marks galat hai (0 ya negative nahi hona chahiye).\n");
        return 1;
    }

    printf("Ab %d marks enter karo:\n", n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &mark);
        if (mark >= 50) {
            passCount++;
        }
        if (mark > topper) {
            topper = mark;
        }
        if (mark < loser) {
            loser = mark;
        }
    }

    printf("Pass hone wale students ki sankhya = %d\n", passCount);
    printf("Topper ke marks = %d\n", topper);
    printf("Loser ke marks = %d\n", loser);

return 0;
}