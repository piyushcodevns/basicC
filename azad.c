#include <stdio.h>
int main()
{
    int n;
    int countofpassedstudents = 0, countoffailedstudents = 0, highestmarks, lowestmarks, passmarks, marks;
    printf("Enter no of students and passmwrks\n");
    scanf("%d %d", &n, &passmarks);
    printf("n=%d, passmarks=%d\n", n, passmarks);
    for (int i = 1; i <= n; i++)
    {
        printf("Enter marks of student %d\n", i);
        scanf("%d", &marks);
        if (i == 1)
        {
            highestmarks = marks;
            lowestmarks = marks;
            if (marks >= passmarks)
                countofpassedstudents++;
            continue;
        }
        if (marks >= passmarks)
            countofpassedstudents++;
        if (marks > highestmarks)
            highestmarks = marks;
        if (marks < lowestmarks)
            lowestmarks = marks;
    }
    countoffailedstudents = n - countofpassedstudents;
    printf("\nPassed students=%d, failed students=%d, highest marks = %d, lowest marks=%d\n", countofpassedstudents, countoffailedstudents, highestmarks, lowestmarks);
    return 0;
}