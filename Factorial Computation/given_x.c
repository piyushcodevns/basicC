#include <stdio.h>

int main()
{
    int x = 2, n = 3;
    int i;
    float result = 1;

    for (i = 1; i <= n; i++)
    {
        result = result * x / (float)i;
    }

    printf("%.2f", result);

    return 0;
}
