#include <stdio.h>

int main()
{
    int num, a, b;

    printf("Enter te value: ");
    scanf("%d %d", &a, &b);

    num = a;
    a = b;
    b = num;

    printf("a=%d b=%d", a, b);

    return 0;
}