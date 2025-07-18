#include <stdio.h>

int main()
{
    int n = 5, i, a = 0, b = 1, c = 1, d;
    printf("%d,%d,%d,", a, b, c);

    for (i = 2; i <= n; i++)
    {
        d = a + b + c;
        printf("%d,", d);
        a = b;
        b = c;
        c = d;
    }
    return 0;
}