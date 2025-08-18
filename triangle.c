
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter three side of angle: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a == b && c == a)
    {
        printf("Equilateral Triangle\n");
    }
    else if (a == b || b == c || c == a)
    {
        printf("Isosceles Triangle\n");
    }
    else
    {
        printf("Scalene Triangle\n");
    }

    if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b)
    {
        printf("Right Angled Triangle\n");
    }
    else{
        printf("Not Right Angled Triangle");
    }
        return 0;
}