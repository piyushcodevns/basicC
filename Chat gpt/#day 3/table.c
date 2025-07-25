#include <stdio.h>

int main() {
    int i;
    int table = 2;

    for(i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", table, i, table * i);
    }

    return 0;
}
