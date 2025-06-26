#include <stdio.h>

int main()
{
    int english, hindi, math;
    float avg;
    float per;

    printf("Enter the marks: ");
    scanf("%d %d %d", &english, &hindi, &math);

    if (english < 40 || hindi < 40 || math < 40)
    {
        printf("Fail\n");
    }
    else
    {
        printf("Pass\n");

        avg = (english + hindi + math) / 3.0;
        if (avg >= 70)
            printf("1st Division\n");
        else if (avg >= 50)
            printf("2nd Division\n");
        else
            printf("3rd Division\n");
    }

    per = (english + hindi + math) / 3.0;
    printf("Percentage=%.2f%%", per);

    return 0;
}