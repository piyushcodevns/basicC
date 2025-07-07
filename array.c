#include <stdio.h>

int main()
{
    int n, i;
    int a[] = {1, 2, 3};// 1 + 4 + 9
    int sum = 0;
    n = sizeof(a) / sizeof(int);
    printf("n: %d", n);

    for (i = 0; i <= n - 1; i++)
    {

        sum += a[i] * a[i];
    }

    printf("\n Sum=%d\n", sum);
    return 0;
}