
#include <stdio.h>

void main() {
    char today[10];

    sprintf(today, "\nToday is: %d/%d/%d", 31, 10, 2023);
    puts(today);
   
    char str[200];
    sprintf(str, "\nI was born in year %d", 2000);
    sprintf(str, "%s\nand current year is %d", str, 2023);
    sprintf(str, "%s\nso I'm %d years old\n", str, (2023 - 2000));

    puts(str);
}