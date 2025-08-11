#include <stdio.h>
#include <math.h>

int main()
{
    float pi = 3.1415927;
    float x = pi / 6.0;
    int n = 0;
    float term = 1.0;
    float sum = term;

    while (fabs(term) > 0.00001)
    {
        term = -(term * x * x) / ((n + 1.0) * (n + 2.0));
        sum += term;
        n += 2;
    }

    printf("%f", sum);
    return 0;
}
