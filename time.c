#include <stdio.h>

int main() {
    int hour, minute, totalMinutes;

    printf("Enter time in HH MM format: ");
    scanf("%d %d", &hour, &minute);

    totalMinutes = (hour * 60) + minute;

    printf("Total minutes since 12:00 AM = %d minutes\n", totalMinutes);

    return 0;
}
