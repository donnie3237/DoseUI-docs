#define _POSIX_C_SOURCE 200809L
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
    int total_days = 0, remainder;
    int y = 0, m = 0, d = 0;

    srand(time(0));
    rand();

    total_days = 100 + rand() % (1000 - 100 + 1);

    y = total_days / 365;
    remainder = total_days % 365;

    m = remainder / 30;
    remainder %= 30;

    d = remainder;

    setlocale(LC_ALL, "");
    printf("\ntotal days: %'d \n", total_days);

    (y > 0) ? printf("year(s): %d\n", y) : printf("");
    (m > 0) ? printf("month(s): %d\n", m) : printf("");
    (d > 0) ? printf("days(s): %d\n", d) : printf("");
}

