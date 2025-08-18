#include <stdio.h>

int main()
{
    int median;
    int a[] = {10, 20, 30, 40};
    int n = sizeof(a)/sizeof(a[0]); 

    if (n % 2 == 1)
        median = a[n / 2];
    else
        median = (a[(n - 1) / 2] + a[n / 2]) / 2;

    printf("Median = %d\n", median);
    return 0;
}
