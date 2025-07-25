#include <stdio.h>

int main()
{
    int i = 0, j = 10;
    for (i, j; i < j; i++, j--)
    {
        printf("i=%d j=%d\n", i, j);
    }

    return 0;
}
