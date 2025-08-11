#include <stdio.h>
#include <math.h>
int main()
{
    int n = 5;
    int x[] = {1, 2, 3, 4, 5};
    int y[] = {2, 3, 5, 4, 6};

    int sum_x = 0, sum_y = 0, sum_x2 = 0, sum_y2 = 0, sum_xy = 0;
    float b, a;

    for (int i = 0; i < n; i++)
    {
        sum_x += x[i];
        sum_y += y[i];
        sum_x2 += x[i] * x[i];
        sum_y2 += y[i] * y[i];
        sum_xy += x[i] * y[i];
    }

    b = (n * sum_xy - sum_x * sum_y) / sqrt((n * sum_x2 - sum_x * sum_x));

    printf("b = %.1f\n", b);
    printf("x=%d, y=%d, x2=%d ,y2=%d ,xy=%d", sum_x, sum_y, sum_x2, sum_y2, sum_xy);
    return 0;
}