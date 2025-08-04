#include <stdio.h>

int main()
{
    float number = 3.6;
    float x1 = 2, x2, x3;

    for (int i = 1; i <= 5; i++)
    {
        x2 = number / x1;
        x3 = (x1 + x2) / 2;

        printf("%d. x1 = %.2f, x2 = %.2f, x3 = %.2f\n", i, x1, x2, x3);

        x1 = x3;
    }

    return 0;
}
