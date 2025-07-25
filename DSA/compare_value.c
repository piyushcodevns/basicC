#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter the Number: ");
    scanf("%d %d", &a, &b);
    if (a < b)
    {
        a = a + b;
        b = a - b;
        a = a - b;
    }
    printf("a=%d b=%d", a, b);
    return 0;
}