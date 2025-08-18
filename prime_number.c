#include <stdio.h>

int main()
{
    int num, i, flag = 0;

    printf("enter the number: ");
    scanf("%d", &num);

    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        printf("not prime number");
    else
        printf("prime number");

    return 0;
}