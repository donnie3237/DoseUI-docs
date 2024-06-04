#include <stdio.h>
#include <stdbool.h>

bool is_in_range(float min, float max, float value);

void main() {
    putchar('\n');

    if (is_in_range(1, 10, 5.5)) {
        printf("5.5 is in range 1-10\n");
    }

    if (!is_in_range(1, 10, -1)) {
        printf("-1 isn't in range 1-10\n");
    }
}

bool is_in_range(float min, float max, float value) {
    if (min <= value && value <= max) {
        return true;
    } else {
        return false;
    }

    /*
    return (min <= value && value <= max);
    */
}


