#include <stdio.h>

int main()
{
    int n = 7;
    int a = 0, b = 1, next, i;

    printf("%d,%d,", a, b);

    for (i = 3; i <= n; i++)
    {
        next = a + b;
        printf("%d,", next);
        a = b;
        b = next;
    }

    return 0;
}