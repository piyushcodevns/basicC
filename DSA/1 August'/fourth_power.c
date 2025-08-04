#include <stdio.h>

int main()
{
    int fact = 2;
    int n = 4, i;

    for (i = 0; i <= n; i++)
    {
        printf("%d, ", fact);
        fact = fact * -4;
    }

    return 0;
}