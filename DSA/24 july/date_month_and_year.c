// Validate a Given Date (dd-mm-yyyy)

#include <stdio.h>

int main()
{
    int month, year;

    printf("Enter the Month: ");
    scanf("%d", &month);

    printf("Enter the Year: ");
    scanf("%d", &year);

    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    {
        printf("Days 31");
        return 0;
    }
    if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        printf("Days 30");
        return 0;
    }
    if (month == 2)
    {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        {
            printf("Leap Year\n");
            printf("Days=29");
        }
        else
        {
            printf("Days=28");
        }
    }
    return 0;
}