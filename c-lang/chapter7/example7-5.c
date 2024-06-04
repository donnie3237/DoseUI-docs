#include <stdio.h>

void main() {
    int n;
    putchar('\n');
    for ( ; ; ) {
        printf("enter integer number 50 - 100 >>");
        scanf("%d", &n);

        if (n >= 50 && n <= 100) {
            puts("thanks!");
            break;		//ออกจากลูป for
        }
    }
}