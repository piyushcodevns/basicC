#include<stdio.h>

int main()
{
    int num,remender,revers=0;

    printf("Enter the value: ");
    scanf("%d",&num);

    while(num!=0)
    {
        remender=num%10;
        revers=revers*10+remender;
        num=num/10;
    }
    printf("Reversed Number: %d",revers);
    return 0;
}