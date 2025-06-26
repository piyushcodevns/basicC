#include <stdio.h>
#include <math.h>

int main()
{
    float a = 1, b = -5, c = 6; // Example: x^2 - 5x + 6 = 0
    float d, x1, x2;

    d = b * b - 4 * a * c;

    if (d > 0) {
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        printf("Two real roots: %.2f and %.2f\n", x1, x2);
    } else if (d == 0) {
        x1 = -b / (2 * a);
        printf("One real root: %.2f\n", x1);
    } else {
        printf("No real roots.\n");
    }

    return 0;
}