#include <stdio.h>

void swap_num(float* n1, float* n2) {
    float temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

void main() {
    float x = 66, y = 99;

    printf("\nbefore: x = %g, y = %g", x, y);

    swap_num(&x, &y);

    printf("\nafter: x = %g, y = %g\n", x, y);
    
}