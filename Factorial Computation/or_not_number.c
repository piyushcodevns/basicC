#include <stdio.h>

int main()
{
    int fact;
    int i = 1, n = 2;
    float f;
    printf("Enter the Factorial Number: ");
    scanf("%d", &fact);
    f = fact;
    while (f > 1)
    {
        f = f / n;
        n++;
    }
    if (f == 1)
        printf("\n%d is factorial", fact);
    else
        printf("\n%d is not factorial", fact);
}