#include <stdio.h>

int main()
{

    int n = 6, r = 1;
    int fn = 1, fr = 1, fnr = 1;
    int result, i;
    for (i = 2; i <= n; i++)
        fn = fn * i;

    for (i = 2; i <= r; i++)
        fr = fr * i;

    for (i = 2; i <= n-r; i++)
        fnr = fnr * i;

    result = (fn) / (fr * fnr);
    printf("\n Result=%d", result);
    return 0;
}