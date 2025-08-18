#include <stdio.h>

int main()
{
    int reverse, remainder = 0, num = 123;

    while (num != 0)
    {
        reverse = num % 10;
        remainder = remainder * 10 + reverse;
        num = num / 10;
    }
    printf("%d", remainder);
    return 0;
}