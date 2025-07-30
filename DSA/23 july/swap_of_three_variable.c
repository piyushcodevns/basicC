// Cyclic Swap of Three Variables Without Using Extra Space

#include <stdio.h>

int main()
{
    int a = 1, b = 2, c = 3;
    a = a + b + c;
    b = a - (b + c);
    c = a - (b + c);
    a = a - (b + c);

    printf("a=%d b=%d c=%d", a, b, c);
    return 0;
}