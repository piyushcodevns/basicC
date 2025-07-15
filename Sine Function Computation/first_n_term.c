#include <stdio.h>

int main()
{
    int n = 10, i;
    int f = 1;
    int sum = 1;
    printf("f(0)=%d, sum=%d ", f, sum);     
    for (i = 1; i <= n; i++)
    {
        f = f * i;
        sum += f;
        printf("f(%d)=%d,sum=%d ", i, f, sum);
    }
    return 0;
}