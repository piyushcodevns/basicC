#include <stdio.h>

int main()
{
    int i = 42;
    int *ptr = &i;

    printf("Value of i: %d\n", i);
    printf("Address of i: %l\n", ptr);
    *ptr = 999;
    printf("Value at ptr (i): %d\n", *ptr);

    return 0;
}
