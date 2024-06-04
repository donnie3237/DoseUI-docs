#include <stdio.h>

void main() {
    int withdraw, remainder;
    int b100 = 0, b500 = 0, b1000 = 0;

    printf("\namount of money to withdraw >>");
    scanf("%d", &withdraw);

    if (withdraw > 20000) {
        puts("can't withdraw more than 20000");
    } else if (withdraw % 100 != 0) {
		printf("amount to withdraw must be ");
		printf("the multiples of 100\n");    
    } else {
        b1000 = withdraw / 1000;
        remainder = withdraw % 1000;

        b500 = remainder / 500;
        remainder %= 500;

        b100 = remainder / 100;
    }

    putchar('\n');

    (b1000 > 0) ? 
        printf("b1000 = %d\n", b1000) : printf("");

    (b500 > 0) ? 
        printf("b500 = %d\n", b500) : printf("");

    (b100 > 0) ? 
        printf("b100 = %d\n", b100) : printf("");
}

