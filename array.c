#include <stdio.h>

int main()
{
    int n;
    int a[] = {1, 2, 3};
    int sum = 0;
    n = sizeof(a) / sizeof(int);
    printf("n:%d", n);
    return 0;
}