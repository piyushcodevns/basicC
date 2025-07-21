#include <stdio.h>
void convertToWord(int n)
{
    if (n == 0)
        return;
    int rem = n % 10;
    convertToWord(n / 10);
    switch (rem)
    {
    case 0:
        printf(" Zero");
        break;
    case 1:
        printf(" One");
        break;
    case 2:
        printf(" Two");
        break;
    case 3:
        printf(" Three");
        break;
    case 4:
        printf(" Four");
        break;
    case 5:
        printf(" Five");
        break;
    case 6:
        printf(" Six");
        break;
    case 7:
        printf(" Seven");
        break;
    case 8:
        printf(" Eight");
        break;
    case 9:
        printf(" Nine");
        break;
    default:
        printf(" Invalid");
        break;
    }
}

int main()
{
    int num = 456;
    convertToWord(num);
    return 0;
}
