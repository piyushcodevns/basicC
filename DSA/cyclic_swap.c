#include <stdio.h>

int main()
{
    int a = 1, b = 2, c = 3;

    printf("enter the value: %d %d %d\n", a, b, c);

    a = a + b + c;
    b = a - (b + c);
    c = a - (b + c);
    a = a - (b + c);

    printf("a=%d b=%d c=%d\n", a, b, c);
    // a->b b->c c->a
    return 0;
}