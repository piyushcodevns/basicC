#include <stdio.h>

int main()
{
    int i, n = 10;
    int fact = 1, sum = 1;
    printf("%d ", fact);
    for (i = 1; i <= n; i += 2)
    {
        fact = -fact * i * (i + 1);
        sum += fact;
        if (fact > 0)
            printf("+%d, ", fact);
        else
            printf("%d, ", fact);
    }
    printf("\nTotal Sum: %d", sum);
    return 0;
}