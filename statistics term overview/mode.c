#include <stdio.h>

int main()
{
    int n = 5, i, j, sum = 0;
    int mean, median;
    int a[] = {2, 5, 4, 2, 6};

    for (i = 0; i < n; i++)
    {
        sum += a[i];
    }
    mean = sum / n;
    printf("Mean = %d\n", mean);

    n = sizeof(a) / sizeof(a[0]);

    if (n % 2 == 1)
        median = a[n / 2];
    else
        median = (a[(n - 1) / 2] + a[n / 2]) / 2;

    printf("Median = %d\n", median);

    int mode = a[0], maxCount = 0;

    for (i = 0; i < n; i++)
    {
        int count = 0;
        for (j = 0; j < n; j++)
        {
            if (a[j] == a[i])
                count++;
        }
        if (count > maxCount)
        {
            maxCount = count;
            mode = a[i];
        }
    }

    printf("Mode = %d\n", mode);
    return 0;
}