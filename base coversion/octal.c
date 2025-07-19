#include <stdio.h>

int main()
{
    int n = 123;
    int base = 8;
    int remainder[20];
    int i = 0;
    while (n > 0)
    {
        remainder[i++] = n % base;
        n = n / base;
        
    }

    for (int j = i-1 ; j >= 0; j--)
    {
        printf("%d", remainder[j]);
    }
    return 0;
}