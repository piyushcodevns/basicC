#include <stdio.h>

int main()
{
    int a, b;
    int result = 0;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    if (a == 0 || b == 0)
    {
        printf("\nresult=0");
        return 0;
    }

    int i, sign = 1;

    if (a < 0)
    {
        sign = -sign;
        a = -a;
    }
    if (b < 0)
    {
        sign = -sign;
        b = -b;
    }
    if (a < b)
    {
        i = a;
        a = b;
        b = i;
    }

    for (i = 0; i < b; i++)
    {
        result = result + a;
    }

    result = sign * result;

    printf("Multiplication result = %d\n", result);
}