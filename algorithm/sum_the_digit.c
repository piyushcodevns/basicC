#include <stdio.h>

int main()
{
    int num, sum=0;
    printf("Enter the integer: ");
    scanf("%d", num);

    while(num>0 ){
    num=num/10;
    sum=sum+num;
}
printf("Total: %d", sum);
return 0;
}