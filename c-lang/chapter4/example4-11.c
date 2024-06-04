
#define _POSIX_C_SOURCE 200809L
#include <locale.h>
#include <stdio.h>

void main() {
    setlocale(LC_ALL, "");

    int a = 12345678;
    double b = 987654321.357;

    putchar('\n');

    printf("a = %'d", a);

    putchar('\n');

    printf("b = %'0.3f", b);

    putchar('\n');
}