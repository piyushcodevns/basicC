#include <stdio.h>

int main()
{
    int n, digit, number = 0;

    printf("How much digit have to give?: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Digits:\n");
        scanf("%d", &digit);
        number = number * 10 + digit;
    }

    printf("Final number = %d\n", number);

    return 0;
}
