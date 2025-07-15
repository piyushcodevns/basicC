#include <stdio.h>

int main()
{
    int n = 3, i, count = 1;

    for (i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            for (int k = 1; k <= n; k++)
            {
                if (i == j || i == k || j == k)
                    continue;
                printf("%d) %d,%d,%d\n", count, i, j, k);
                count++;
            }
        }
    }
    return 0;
}