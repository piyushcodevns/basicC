#include <stdio.h>

int main()
{
    int sum, num, digit=0;
    printf("Enter the Number: ");
    scanf("%d", &num);

    while (sum != 0)
    {
        digit = num % 10;
        sum = sum + digit;
        num = num / 10;
    }
    printf("%d", sum);
    return 0;
}