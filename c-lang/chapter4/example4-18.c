
#include <stdio.h>
#include <string.h>

void main() {
    int i = 1234;
    float f = 56.789;
    char i_str[10], f_str[10];

    sprintf(i_str, "%d", i);
    sprintf(f_str, "%0.2f", f);

    printf("\ni = %s, f = %s \n", i_str, f_str);
}