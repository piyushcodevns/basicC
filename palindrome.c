#include <stdio.h>
int main()
{
    int n = 1221, revrsed = 0, remainder, original;
    original = n;
    while (n != 0)
    {
        remainder = n % 10;
        revrsed = revrsed * 10 + remainder;
        n /= 10;
    }
    if (original == revrsed)
    {
        printf("%d is palindrome number", original);
        return 0;
    }
    else
    {
        printf("%d is not palindrome number", original);
    }
    return 0;
}