#include <stdio.h>

int main()
{
    int day, month, year;
    int a1, m1, y1;
    int a2, m2, y2;

    printf("Enter the day, month,year: ");
    scanf("%d %d %d", &a1, &m1, &y1);

    printf("Enter the day, month, year: ");
    scanf("%d %d %d", &a2, &m2, &y2);

    if (y1 < y2)
    {
        printf("%d %d %d is earlier", a1, m1, y1);
        return 0;
    }
    if (y1 > y2)
    {
        printf("%d/%d/%d two is earlier", a2, m2, y2);
        return 0;
    }

    if (m1 < m2)
    {
        printf("%d %d %d is earlier", a1, m1, y1);
        return 0;
    }
    if (m1 > m2)
    {
        printf("%d %d %d is earlier", a2, m2, y2);
        return 0;
    }
    if (a1 < a2)
    {
        printf("%d %d %d is earlier", a1, m1, y1);
        return 0;
    }
    if (a1 > a2)
    {
        printf("%d %d %d is earlier", a2, m2, y2);
        return;
    }

    printf("Both are equal");

    return 0;
}