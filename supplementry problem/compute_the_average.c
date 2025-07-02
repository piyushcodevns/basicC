#include <stdio.h>

int main()
{
    int n;
    float avg ,num, sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%f", &num);
        sum += num;
    }
    avg = sum / n;
    printf("Average = %.2f\n", avg);

    return 0;
}