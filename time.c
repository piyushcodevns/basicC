#include <stdio.h>

int main() {
    int totalMinutes, hour, minute;

    printf("Enter total minutes: ");
    scanf("%d", &totalMinutes);

    if (totalMinutes < 0) {
        printf("Invalid input. Minutes cannot be negative.\n");
    }

    hour = totalMinutes / 60;
    minute = totalMinutes % 60;

    printf("%d hour and %d minute\n", hour, minute);

    return 0;
}
