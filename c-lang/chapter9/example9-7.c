#include <stdio.h>

int increment1();
int increment2();

void main() {
    for (int i = 1; i <= 5; i++) {
        printf(
            "\nloop %d non-static value = %d", 
            i, increment1()
        );

        printf(
            "\nloop %d static value = %d", 
            i, increment2()
        );

        putchar('\n');
    }
}

int increment1() {
    int value = 0;
    return ++value;
}

int increment2() {
    static int value = 0;
    return ++value;
}

