
#include <stdio.h>

void main() {
    float num, sum = 0.0;

    putchar('\n');

    for (int i = 1; i <= 5; i++) {
        printf("number #%d >>", i);
        scanf("%f", &num);
        sum += num;
    }
    
    printf("\nsum: %g", sum);
    printf("\naverage: %g \n",  + sum / 5);
}