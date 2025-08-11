#include <stdio.h>

int main()
{
    int num = 28, sum = 0;
    int i;

    for (i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sum = sum + i;
        }
    }
    if (num == sum)
    {
        printf("%d is Perfect Number", num);
        return 0;
    }
    printf("%d is not a Perfect Number", num);
    return 0;
}