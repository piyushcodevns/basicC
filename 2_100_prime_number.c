#include <stdio.h>
#include <math.h>
int main()
{
    int i, j, n = 100, limit, isPrime, count = 0;

    for (i = 2; i <= n; i++)
    {
        isPrime = 1;
        for (j = 2; j < i; j++)
        {
            count++;
            if (i % j == 0)
            {
                isPrime = 0;
                break;
            }
        }

        if (isPrime)
            printf("%d,", i);
    }
    printf("Count=%d", count);
    return 0;
}