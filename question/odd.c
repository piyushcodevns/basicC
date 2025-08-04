#include <stdio.h>

int main()
{
    int i, n = 10;

    for (i = 3; i < n; i += 2)
    {
        printf("%d, ", i);
    }
    return 0;
}