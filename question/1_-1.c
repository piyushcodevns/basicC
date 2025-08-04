#include <stdio.h>

int main()
{
    int i, n = 10;

    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            printf("-1 ");
        }
        else
        {
            printf("1 ");
        }
    }
    return 0;
}