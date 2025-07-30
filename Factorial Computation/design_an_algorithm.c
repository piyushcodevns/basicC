#include <stdio.h>

int main()
{
    int n = 2;
    float result;
    int f = 1;
    for (int i = 2; i <= n; i++)
    {
        f = f * i;
    }
    result = 1.0 / f;
    printf("\n%d, %f", f, result);
    return 0;
}
