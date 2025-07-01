#include <stdio.h>

int main() {
    int n, i;
    int negative = 0;
    int nonNegative = 0;
    int number;

    printf("Enter How much number you have to print: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Number %d ", i);
        scanf("%d", &number);

        if (number < 0) {
            negative = negative + 1;
        } else {
            nonNegative = nonNegative + 1;
        }
    }

    printf("Numbers of negative number: %d\n", negative);
    printf("Numbers of non-negative numbers: %d\n", nonNegative);

    return 0;
}
