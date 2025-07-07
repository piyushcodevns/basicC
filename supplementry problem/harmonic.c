#include <stdio.h>

int main()
{
    int n, i;
    int num;
    float sum = 0;
    float h;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        sum += 1 /(float) num;
    }

    h = (float)n / sum;

    printf("Harmonic Mean: %.2f\n", h);

    return 0;
}
