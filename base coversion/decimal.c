#include <stdio.h>

int main()
{
    int n = 110;
    int decimal = 0, rem;
    int base = 2;
    int m = 1;
    while (n > 0)
    {
        rem = n % 10;
        decimal += rem * m;
        n = n / 10;
        m = m * base;
    }
    printf("%d", decimal);
}