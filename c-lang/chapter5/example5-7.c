
#include <stdio.h>

void main() {
    int w, d, b = 1000;

    printf("\nbalance: %d", b);

    printf("\n\nwithdraw >>");
    scanf("%d", &w);
    b -= w;
    printf("balance: %d", b);

    printf("\n\ndeposit >>");
    scanf("%d", &d);
    b += d;
    printf("balance: %d", b);

    printf("\n\ndeposit >>");
    scanf("%d", &d);
    b += d;
    printf("balance: %d", b);

    printf("\n\nwithdraw >>");
    scanf("%d", &w);
    b -= w;
    printf("balance: %d", b);

    putchar('\n');
}