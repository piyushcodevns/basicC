#include <stdio.h>

int main()
{
    int a = 3, b = 5, c = 6;
    int lcm, i;

    for (i = c;; i += c)
    {
        if (i % a == 0&& i % b == 0)
        {
            printf("yes yes %d",i);
            lcm=i;
            break;
        }
        else{
            printf("%s %s %d\n",
            (i%a==0)? "yes":"No",
            (i%b==0)? "Yes":"No",
        i);
        }
    }
    printf("\nSo LCM is %d",i);
    return 0;
}