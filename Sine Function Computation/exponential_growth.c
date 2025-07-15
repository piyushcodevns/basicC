#include <stdio.h>

int main()
{
    int n = 10, i;
    int f = 1;
    float sum = 1;
    printf("f(0)=%d, sum=%0.f ", f, sum);     
    for (i = 1; i <= n; i++)
    {
        f = f * i;
        sum += 1.0/f;
        printf("f(%d)=%d,sum=%0.2f ", i, f, sum);
    }
    return 0;
}