#include <stdio.h>

int main()
{
    int year;
    printf("Enter the Year: ");
    scanf("%i", &year);
    if ((year % 400 == 0) , (year % 4 == 0 && year % 100 == 0))
        printf("%i is Leap Year\n", year);
    else
        printf("%i is not Leap Year", year);


        
    return 0;
}
