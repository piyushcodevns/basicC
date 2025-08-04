#include <stdio.h>
#include <math.h>

int main()
{
    int num = 23, limit, i;

    limit = (int)sqrt(num);

    for (i = 2; i <= limit; i++)
    {
        if (num % i == 0)
        {
            printf("Not prime number\n");
            return 0;
        }
    }
    printf("Prime Number\n");
    return 0;
}
