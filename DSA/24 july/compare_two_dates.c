// Compare Two Dates

#include <stdio.h>

int main()
{
    int date1, month1, year1;
    int date2, month2, year2;

    printf("Enter the day 1: ");
    scanf("%d %d %d", &date1, &month1, &year1);

    printf("Enter the day 2: ");
    scanf("%d %d %d", &date2, &month2, &year2);

    if (date1 < date2)
    {
        printf("Day 1 is earlier");
        return 0;
    }
    if (date1 > date2)
    {
        printf("Day 2 is earlier");
        return 0;
    }
    if (month1 < month2)
    {
        printf("Day 1 is earlier");
        return 0;
    }
    if (month1 > month2)
    {
        printf("Day 2 is earlier");
        return 0;
    }
    if (year1 < year2)
    {
        printf("Day 1 is earlier");
        return 0;
    }
    if (year1 > year2)
    {
        printf("Day 2 is earlier");
        return 0;
    }
    printf("Both are equal");
    return 0;
}