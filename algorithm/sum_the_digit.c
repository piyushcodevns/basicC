#include <stdio.h>

int main()
{
    int num, sum = 0;
    printf("Enter the integer: ");
    scanf("%d", &num);

    while (num > 0)
    {
        int r = num % 10;
        num = num / 10;
        sum += r;
    }
    printf("Total: %d", sum);
    return 0;
}