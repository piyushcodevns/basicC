#include <stdio.h>

int main()
{
    float n = 0.369;
    int base = 2;
    int currentvalue;
    int count = 0;

    while (n != 0 && count < 10)
    {
        n = n * base;
        currentvalue = n;
        n = n - currentvalue;
        printf("n = %.2f, current value = %d \n", n, currentvalue);
        count++;
    }
return 0;
}