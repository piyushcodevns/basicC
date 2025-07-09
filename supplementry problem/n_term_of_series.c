#include <stdio.h>

int main()
{
    int n = 5, i;
    int sum = 0;
    int odd_count;

    odd_count=n-n/2;
    for (i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d,", i);
            sum += i;
        }
        else
        {
            printf("%d,", -i);
            sum += -i;
        }
    }
    printf("\nNumber of odd terms: %d", odd_count);
    printf("\nSum of the first %d terms is: %d", n, sum);
    return 0;
}
/*
 *    1, -2, 3, 4
 */