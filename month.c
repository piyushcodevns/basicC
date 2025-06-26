#include <stdio.h>

int main()
{
    int month, year;
    printf("Enter month number (1-12): ");
    scanf("%d", &month);
    printf("Enter year: ");
    scanf("%d", &year);

    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
        printf("Days = 31");
    else if (month == 4 || month == 6 || month == 9 || month == 11)
        printf("Days = 30");

    else if (month == 2)
    {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        {
            printf("Leap Year\n");
            printf("days = 29");
        }
        else
        {
            printf("Not Leap Year\n");
            printf("days = 28");
        }
    }
    else
        printf("Invalid month number\n");
    return 0;
}