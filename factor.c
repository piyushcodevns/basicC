#include <stdio.h>
#include <math.h>

int main()
{
    int n = 6;
    int limit = (int)sqrt(n);
    int sum = 0;

    for (int a = 1; a <= limit; a++)
    {
        if (n % a == 0)
        {
            printf("%d: ", a);
            if (a != n / a)
                printf("%d\n", n / a);

            if (a != n)
                sum += a;
            if (a != n / a && n / a != n)
                sum += n / a;
        }
    }

    printf("\n");

    if (sum == n)
        printf("%d is a Perfect Number\n", n);
    else
        printf("%d is NOT a Perfect Number\n", n);

    return 0;
}
