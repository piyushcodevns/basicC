#include <stdio.h>

int main()
{
    int a = 0, b = 1, c, n = 3, i;

    for (i = 1; i <= n; i++)
    {
        c = a + b;
        printf("%d+%d\n", i, i - 1);
        a = b;
        b = c;
    }

    return 0;
}
