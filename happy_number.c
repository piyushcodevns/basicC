#include <stdio.h>

int main()
{
    int num = 145, remainder;
    int sumofsquares = 0;
    int copy = num;
    int seen[1000];
    int index = 0;

    printf("%d,", num);

    while (1)
    {
        sumofsquares = 0;

        while (num != 0)
        {
            remainder = num % 10;
            sumofsquares += remainder * remainder;
            num = num / 10;
        }

        for (int i = 0; i < index; i++)
        {
            if (seen[i] == sumofsquares)
            {
                printf("%d,", sumofsquares);
                printf("\n%d is not a happy number", copy);
                return 0;
            }
        }

        printf("%d,", sumofsquares);
        if (sumofsquares == 1)
        {
            printf("\n%d is a happy number", copy);
            return 0;
        }

        seen[index++] = sumofsquares;
        num = sumofsquares;
    }

    return 0;
}
