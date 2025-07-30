// Swap Two Numbers Using a Temporary Variable

#include <stdio.h>

int main()
{
    int a = 30, b = 10;

    int n = a;
    a = b;
    b = n;

    printf("a=%d b=%d", a, b);
    return 0;
}