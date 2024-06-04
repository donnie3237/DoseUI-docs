#include <stdio.h>

void main() {
    FILE *fpt;
    fpt = fopen(__FILE__, "r");
    char c;

    putchar('\n');
    while ((c = fgetc(fpt)) != EOF) {
        printf("%c", c);
    }
    putchar('\n');

    fclose(fpt);   
}