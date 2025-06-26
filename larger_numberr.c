#include <stdio.h>

int main()
{
    int a = 4, b = 3, c = 2;
    int max;

    max = a;
    if (b > max)
    b = max;
    if (c > max)
    c = max;

    printf("The maximun of %d, %d and %d is %d",a,b,c,max);
    return 0;
}