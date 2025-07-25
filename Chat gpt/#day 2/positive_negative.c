// Print whether it is positive, negative, or zero
#include <stdio.h>

int main()
{
    int num;

    printf("Enter the number: ");
    scanf("%d", &num);

    if (num > 0)
    {
        printf("Positive Number");
    }
    else if (num < 0)
    {
        printf("Negative Number");
    }
    else
        {
            printf("zero");
        }
        return 0;
}