// Convert 24-Hour Format to 12-Hour Format

#include <stdio.h>

int main()
{
    int hour24, minute, hour12;
    char *period;

    printf("Enter the time: ");
    scanf("%d %d", &hour24, &minute);

    if (hour24 > 23 || minute < 0 || hour24 < 0 || minute > 59)
    {
        printf("Invalid Time");
        return 0;
    }
    if (hour24 < 12)
    {
        period = "AM";
    }
    else
    {
        period = "PM";
    }

    hour12 = hour24 % 12;

    if (hour12 == 0)
    {
        hour12 = 12;
    }
    printf("Time=%d:%d %s", hour12, minute, period);
    return 0;
}