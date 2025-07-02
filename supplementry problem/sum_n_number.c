#include <stdio.h>

int main()
{
    int n, i;
    int sum = 0, num;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    for(int i=1;i<=n;i++)
    {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        sum+=num;
    }
    printf("Sum = %d", sum);
    return 0;
}