#include <stdio.h>
int main()
{
    int a = 1, b = 5, c = 0, max;
    max = a;
    if (b > max)

        max = b;
    if (c > max)

        max = c;
    printf("Max is %d\n", max);
    max = (a > b) ? a : b;
    printf("Max is %d", max);
    max = (a >= b && a >= c) ? a : (b >= c) ? b
                                            : c;
    printf("Max is %d", max);

    return 0;
}
