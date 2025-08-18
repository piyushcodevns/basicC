#include <stdio.h>

int main()
{
    int n = 5, i;
    int sum = 0;

    for (i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d,", i);
            sum += i;
        }
        else
        {
            printf("%d,", -i);
            sum += -i;
        }
    }
    return 0;
}