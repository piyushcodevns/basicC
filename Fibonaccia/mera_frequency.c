#include <stdio.h>
int main()
{
    int a = 0, b = 1, n = 1, c, i;
    if(n==1)
    {
        printf("0,");
        return 0;
    }
    printf("%d,%d,", a, b);
    for (i = 3; i <= n ; i++)
    {
        c = a + b;
        printf("%d,", c);
        a = b;
        b = c;
    }
    printf("%d.", a + b);
    return 0;
}