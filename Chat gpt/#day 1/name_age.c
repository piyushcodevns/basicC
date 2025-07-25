// Take input of your name (single word) and age

#include <stdio.h>

int main()
{
    char name[50];
    int age;

    printf("Name: ");
    scanf("%s", &name);

    printf("Age: ");
    scanf("%d", &age);

    printf("Hello! my name is %s and my age is %d", name, age);
    return 0;
}