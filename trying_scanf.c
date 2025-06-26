#include <stdio.h>
int main()
{
    int a = 4, b = 10, c = 3;
    int max;
    max = a;
    if (b > max)
        max = b;
    if (c > max)
        max = c;
    printf("The maximum of %i, %i, and %i is %i\n", a, b, c, max);
    return 0;
}