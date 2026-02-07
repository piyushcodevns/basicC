// Count Even and Odd Numbers
#include <stdio.h>
int main()
{
    int i, n = 6;
    int a[] = {1, 2, 3, 4, 5, 6};
    int even = 0, odd = 0;

    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)

            even++;

        else
            odd++;
    }
    printf("Even Number: %d", even);
    printf("\nOdd Number: %d", odd);

    return 0;
}