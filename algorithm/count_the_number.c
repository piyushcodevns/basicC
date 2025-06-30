#include <stdio.h>

int main()
{
    int num, count = 0;
    printf("Enter the Integer: ");
    scanf("%d", &num);
    
    if (num == 0)
    {
        count == 1;
    }

    while (num != 0)
    {
        num = num / 10;
        count++;
    }
    printf("Digit=%d", count);
    return 0;
}