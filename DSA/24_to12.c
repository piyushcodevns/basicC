#include <stdio.h>

int main()
{
    int hour24 = 00, minute = 00, hour12;
    char *period;

    hour12 = hour24 % 12;

    if (hour24 < 0 || hour24 > 23 || minute < 0 || minute > 59)
    {
        printf("Invalid Time\n");
        return 1;
    }
    else
    {
        printf("Correct Time\n");
    }

    if (hour12 == 0)
        hour12 = 12;

    if (hour24 >= 12)
        period = "PM";
    else
        period = "AM";

    printf("%d:%02d %s", hour12, minute, period);
    return 0;
}
