#include <stdio.h>

int main()
{
    int n = 21, a = 0, b = 1, next;
    printf("%d,%d,", a, b);
    next = a + b;
    while (next <= n)
    {
        printf("%d,", next);
        a = b;
        b = next;
        next = a + b;
    }
    return 0;
}