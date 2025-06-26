#include <stdio.h>
int main()
{
    int a = 1, b = 5, c = 0, max;

    max = (a >= b && a >= c) ? a : (b >= c) ? b
                                            : c;
    printf("Max=%d\n", max);

    max = (a >= b) ? (a >= c) ? a : c : (b >= c) ? b
                                                 : c;
    printf("Max=%d\n", max);

    max = (a < b || a < c) ? (b >= c) ? b : c : a;
    printf("Max=%d\n", max);
    return 0;
}
