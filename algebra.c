#include <stdio.h>
int main()
{
    int a = 1, b = 33, c = 507, d = 7, e = 4;
    printf("%5d%5d%5d\n", a, b, c);
    printf("%5d%5d%5d\n", c, d, e);
    printf("\n\n\n");
    printf("%-5d%-5d%-5d\n", a, b, c);
    printf("%-5d%-5d%-5d\n", c, d, e);
}