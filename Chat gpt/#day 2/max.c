// Print the largest among them
#include <stdio.h>

int main()
{
    int a, b, c;
    int max;

    printf("Enter the value of a,b,c: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("A is max");
    }
    else if(b>a && b>c)
    {
        printf("B is max");
    }
    else
    {
        printf("C is max");
    }
    return 0;
}