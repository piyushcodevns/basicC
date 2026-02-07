#include <stdio.h>
#include <math.h>

int main()
{
    int x[] = {1, 2, 3, 4, 5, 6};
    float y[] = {1393.7, 1411.5, 1391.7, 1392.8, 1389.4, 1367.8};
    float b, a, z, r;
    int sum_x = 0, sum_x2 = 0;
    float sum_y = 0, sum_y2 = 0, sum_xy = 0;
    int i, n = 6, l;

    printf("Enter th days: ");
    scanf("%d", &l);

    for (i = 0; i < n; i++)

    {
        sum_x += x[i];
        sum_y += y[i];
        sum_x2 += x[i] * x[i];
        sum_y2 += y[i] * y[i];
        sum_xy += x[i] * y[i];
    }

    b = (n * sum_xy - sum_x * sum_y) / (n * sum_x2 - sum_x * sum_x);
    a = (sum_y - b * sum_x) / n;
    z = a + b * l;

    r = (n * sum_xy - sum_x * sum_y) /
        (sqrt(n * sum_x2 - sum_x * sum_x) * sqrt(n * sum_y2 - sum_y * sum_y));

    printf("Regression line : y = %.2f + %.2f", b, a);
    printf("\nCorrelation Cofficient (r): %.3f", r);
    printf("\nPerdicted Y for X = %d is: %.3f", l, z);

    return 0;
}