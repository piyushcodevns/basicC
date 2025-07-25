// Swap their values without using any extra variable
#include <stdio.h>

int main()
{
    float a, b;
    float sum, difference, multiply, divide;

    printf("Enter the value of a and b: ");
    scanf("%f %f", &a, &b);

    sum = a + b;
    printf("Sum: %.2f\n", sum);
    difference = a - b;
    printf("Difference: %.2f\n", difference);
    multiply=a *b;
    printf("Multiply: %.2f\n", multiply);
    divide=a/b;
    printf("Divide: %.2f\n",divide);

    return 0;
}