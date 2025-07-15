#include <stdio.h>

int main()
{
    int n, i;
    int target;
    int num;

    printf("Enter the value of number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
    }

    return 0;
}
