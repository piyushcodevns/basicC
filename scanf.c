#include <stdio.h>

int main() {
    int i;
    float f;
    char c;
    char str[100];

    printf("Enter an integer: ");
    scanf("%d", &i);

    printf("Enter a float: ");
    scanf("%f", &f);

    printf("Enter a character: ");
    scanf(" %c", &c);

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Integer: %d, Float: %f, Character: %c, String: %s\n",i, f, c, str);

    return 0;
}