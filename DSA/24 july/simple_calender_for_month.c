// Print a Simple Calendar for a Month
#include <stdio.h>

int main()
{
    int days = 3, month = 3, i;
    int numofdays;

    if (month == 2)
        numofdays = 28;
    else if (month == 1 || month == 3 || month == 5 || month == 7 ||
             month == 8 || month == 10 || month == 12)
        numofdays = 31;
    else
        numofdays = 30;

    printf("\nSun\tMon\tTue\tWed\tThu\tFri\tSat\n");

    for (i = 1; i < days; i++)
    {
        printf("\t");
    }

    for (int day = 1; day <= numofdays; day++, i++)
    {
        printf("%d\t", day);
        if (i % 7 == 0)
        {
            printf("\n");
        }
    }

    return 0;
}
