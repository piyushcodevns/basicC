#include <stdio.h>

int main()
{
    int fact = 1;
    int i, n = 4;

    for (i = 1; i <= n; i++)
    {
        printf("%d, ", fact);
        fact = fact * -4;
    }
    return 0;
}