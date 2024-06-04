#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void main() {
    int num, digit;
    char str_digit[100] = "";
    char str_separated_ditgits[100] = "";
    bool is_first = true;
    int max, min, sum = 0;
    float average;

    printf("\nenter +integer number >>");
    scanf("%d", &num);

    int remainder = num;
    int count = 0;

    while (remainder > 0) {
        digit = remainder % 10;

        if (is_first) {
            sprintf(str_digit, "%d", digit);
            min = digit;
            max = digit;
        } else {
           sprintf(str_digit, "%d, ", digit);     
        }

        strcat(str_digit, str_separated_ditgits);
        strcpy(str_separated_ditgits, str_digit);

        min = (digit < min) ? digit : min;
        max = (digit > max) ? digit : max;
        sum += digit;

        is_first = false;
        count++;

        remainder /= 10;
    }

    printf("\ndigit(s): %s", str_separated_ditgits);
    printf("\nmin: %d", min);
    printf("\nmax: %d", max);
    printf("\nsum: %d", sum);
    printf("\naverage: %g\n", (float)sum/count);
}