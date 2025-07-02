#include <stdio.h>

int main()
{
    int n, i;
    int sum = 0;

    printf("Number: ");
    scanf("%d", &n);

    for (i = 0; i <= n; i++)
    {
        sum += i * i;
    }
    printf("sum of square: %d", sum);

    return 0;
}