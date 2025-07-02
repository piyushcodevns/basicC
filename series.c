#include<stdio.h>

int main()
{
    int n,value=1;

    printf("Number: ");
    scanf("%d",&n);

    for( int i=1;i<n;i++);
    {
printf("%d",value);
value+=value;
     }
return 0;
}