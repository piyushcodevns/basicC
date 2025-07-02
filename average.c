#include <stdio.h>

int main()
{
    int n;
    float avg;
    int num, sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter number 1: ");
    scanf("%d", &num);
    sum = num;
    for (int i = 2; i <= n; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        sum += num;
    }
    avg = sum / (float)n;
    printf("\nSum = %d , n = %d , Average = %.2f", sum, n, avg);

    return 0;
}