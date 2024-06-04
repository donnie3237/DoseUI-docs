#include <stdio.h>

int scan_int(char msg[], int min, int max);
void f1();
void f2();

void main() {
    f1();
    f2();
}

int scan_int(char msg[], int min, int max) {
    int x;

    printf(msg);
    scanf("%d", &x);
    if (min <= x  && x <= max) {
        return x;
    } else {
        scan_int(msg, min, max);
    }
}

void f1() {
    putchar('\n');
    int x = scan_int("enter 1 - 10 >>", 1, 10);
    printf("in f1() value = %d\n", x);
}

void f2() {
    putchar('\n');
    int x = scan_int("enter 10 - 20 >>", 10, 20);
    printf("in f2() value = %d\n", x);
}