#include <stdio.h>

int main()
{
    int n = 6;
    int f =1, newf=1;
    int value = 122;
    for (int i = 1;; i++)
    {
        newf=f*i;
        
        if (value % newf != 0)
            break;
            f = newf;
    }
    printf("%d,", f);
    return 0;
}