#include <stdio.h>
void fn(int n)
{

    for (int i = 1; i <= n; i++)
    {
        printf("%d ", i * 2);
    }
}

int main()
{
    int i, n = 10;
    fn(n);
    return 0;
}