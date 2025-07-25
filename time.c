#include <stdio.h>

int main() {
    int hour24, minute, hour12;

    printf("Enter time in 24-hour format (hour minute): ");
    scanf("%d %d", &hour24, &minute);

    hour12 = hour24 % 12;
    if (hour12 == 0)
        hour12 = 12;

    printf("12-hour format: %d:%02d\n", hour12, minute);

    return 0;
}