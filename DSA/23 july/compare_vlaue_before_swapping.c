// Compare Values Before Swapping
#include <stdio.h>

int main()
{
    int a = 20, b = 30;

    if (a < b)
    {
        a = a + b;
        b = a - b;
        a = a - b;
    }
    printf("a=%d b=%d", a, b);
    return 0;
}
