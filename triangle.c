
// #include <stdio.h>

// int main()
// {
//     int a, b, c, count = 0, t;
//     printf("Enter Three side of triangle: ");
//     scanf("%d %d %d", &a, &b, &c);
//     if (a > c)
//     {
//         t = a;
//         a = c;
//         c = t;
//     }
//     if (b > c)
//     {
//         t = b;
//         b = c;
//         c = t;
//     }
//     if (a * a + b * b == c * c)
//         printf("Right Angled Triangle\n");
//     if (a == b)
//         count++;
//     if (a == c)
//         count++;
//     if (b == c)
//         count++;
//     if (count == 3)
//         printf("Equilateral triangle");
//     else if (count == 1)

//         printf("Isosceles triangle");
//     else

//         printf("Scalene triangle");

//     return 0;
// }

#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter three side of angle: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a == b && c == a)
    {
        printf("Equilateral Triangle\n");
    }
    else if (a == b || b == c || c == a)
    {
        printf("Isosceles Triangle\n");
    }
    else
    {
        printf("Scalene Triangle\n");
    }

    if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b)
    {
        printf("Right Angled Triangle\n");
    }
    else{
        printf("Not Right Angled Triangle");
    }
        return 0;
}