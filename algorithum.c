#include <stdio.h>

int main()
{
    int n = 1236 ;
    int rev = 0, r = 0;
    while (n > 0)
    {
        r = n % 10;
        n = n / 10;
        rev=rev*10 +r;
        printf("n=%d, r=%d\n", n, r);
        // r = n % 10;
        // n = n / 10;
    }
    printf("\nRev=%d",rev);

    return 0;
}