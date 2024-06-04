#include <stdio.h>
#include <stdbool.h>
#include <math.h>

void main() {
    float base, result = 1;
    int power;
    bool error = false;

    printf("\nbase >>");
    scanf("%f", &base);

    printf("power (+int) >>");
    scanf("%d", &power);

    if (power == 0) {
        result = 1;
    } else if (power >= 1)  {
        for (int i = 1; i <= power; i++) {
            result *= base;
        }      
    } else {
        result = 0;
        error = true;
    }

    if (!error) {
        printf("\n%g ^ %d = %g", base, power, result);
        printf(
            "\nusing pow(%g, %d) = %g\n", 
            base, power, pow(base, power)
        );
    } else {
        puts("\nerror! invalid number\n");
    }
}