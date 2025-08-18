#include <stdio.h>
#include <math.h>

int main()
{
    int n = 5, i, l;
    int x[] = {10, 20, 30, 40, 50};
    int y[] = {40, 30, 20, 10, 5};

    float a, b, z, c;
    int sum_x = 0, sum_y = 0, sum_x2 = 0, sum_y2 = 0, sum_xy = 0;

    printf("Enter the day: ");
    scanf("%d", &l);
    for (i = 0; i < n; i++)
    {
        sum_x += x[i];
        sum_y += y[i];
        sum_x2 += x[i] * x[i];
        sum_y2 += y[i] * y[i];
        sum_xy += x[i] * y[i];
    }
    b = (0.0 + n * sum_xy - sum_x * sum_y) / (n * sum_x2 - sum_x * sum_x);
    a = (0.0 + sum_y - b * sum_x) / n;
    z = (0.0 + a + b * l);
    c = (0.0 + n * sum_xy - sum_x * sum_y) / sqrt((n * sum_x2 - sum_x * sum_x) * (n * sum_y2 - sum_y * sum_y));
    printf("a=%.1f b=%.1f z=%.1f c=%.3f\n", a, b, z, c);
    printf("x=%d y=%d x2=%d y2=%d xy=%d", sum_x, sum_y, sum_x2, sum_y2, sum_xy);

    return 0;
}