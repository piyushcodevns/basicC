#include <stdio.h>

int main()
{
    int num = 153, originalNum, remainder, result = 0;

    originalNum = num;

    while (originalNum != 0)
    {
        remainder = originalNum % 10;
        result = result + remainder * remainder * remainder;
        originalNum /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong Number\n", num);
    else
        printf("%d is not an Armstrong Number\n", num);

    return 0;
}