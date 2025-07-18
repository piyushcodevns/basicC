#include <stdio.h>

int main()
{
    int x1 = 5, x2 = -8, t, a = 0, b = 1, c;
    if (x1 < x2)
    {
        t = x1;
        x1 = x2;
        x2 = t;
    }
    printf("%d %d\n", x1, x2);
    c = a + b;
    while (c < x1)
    {
        a = b;
        b = c;
        c = a + b;
    }
    printf("A=%d B=%d C=%d, X1=%d, X2=%d\n", a, b, c, x1, x2);
    if(x1==c && x2==b)
    printf("Mil gaya");
    else 
    printf("Nahin mila");

    return 0;
}