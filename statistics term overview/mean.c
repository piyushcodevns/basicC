#include <stdio.h>

int main()
{
    int a[] = {10, 20, 30, 40, 50};
    int n = 5, mean, i, sum = 0;
    for (i = 0; i < n; i++)
    {
        sum += a[i];
    }
    mean = sum / n;
    printf("Mean = %d", mean);
    return 0;
}