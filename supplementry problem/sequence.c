#include <stdio.h>

int main()
{
    int n=10, i;
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
            printf("1 ");
        else
            printf("-1 ");
    }

    return 0;
}
