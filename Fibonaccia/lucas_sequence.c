#include <stdio.h>

int main()
{
    int n = 7, i, a = 1, b = 3, c;
    printf("%d,%d,", a, b);

    for (i = 3; i <= n; i++)

    {
        c = a + b;
        printf("%d,", c);
        a = b;
        b = c;
    }
    return 0;
}