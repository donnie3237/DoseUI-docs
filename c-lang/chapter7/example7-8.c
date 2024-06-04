#include <stdio.h>

void main() {
    int x;
    
    putchar('\n');
    do {
        printf("enter number greater than 99 >>");
        scanf("%d", &x);
    } while (x <= 99);

    printf("thanks!\n");

}