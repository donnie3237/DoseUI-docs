#include <stdio.h>
#include <string.h>

void main() {
    printf("\n%d + %d = %d\n", 10, 20, (10 + 20));

    int year_born = 2000;
    int current_year = 2023;
    char str[200] = "\nI was born in year %d";
    strcat(str, "\nand current year is %d");
    strcat(str, "\nso I'm %d years old\n");

    printf(str, year_born, current_year, 
          (current_year - year_born)
    );
}