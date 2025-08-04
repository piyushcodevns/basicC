#include <stdio.h>

int main()
{
    int i, n = 10;
    int fact = 1;
    printf("%d, ", fact);
    for (i = 1; i <= n; i+=2)
    {
        fact = fact * i * (i + 1);
        printf("%d, ", fact);
    }
    return 0;
}