#include <stdio.h>

int main()
{
    int n = 10, i;

    int sum1 = 0;
    printf("Natural Number\n");
    for (i = 1; i <= n; i++)
    {
        printf("%d, ", i);
        sum1 += i;
    }
    printf("\nSum:%d\n\n", sum1);

    int sum2 = 0;
    printf("Even Number\n");
    for (i = 2; i <= 21; i += 2)
    {
        printf("%d, ", i);
        sum2 += i;
    }
    printf("\nSum:%d\n\n", sum2);

    int sum3 = 0;
    printf("Odd Number\n");
    for (i = 1; i <= 20; i += 2)
    {
        printf("%d, ", i);
        sum3 += i;
    }
    printf("\nSum:%d", sum3);
}