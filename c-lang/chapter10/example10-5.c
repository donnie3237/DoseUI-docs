#include <stdio.h>
#include <stdbool.h>

bool in_num_array(float nums[], int size, float x) {
    for (int i = 0; i < size; i++) {
        if (nums[i] == x) {
            return true;
        }
    }

    return false;
}

void main() {
    float a[6] = {-1, 3.141, -0, -5, 0.357, 99};
    int sz = sizeof(a) / sizeof(a[0]);

    putchar('\n');

    in_num_array(a, sz, -1) ?
        printf("%d is in array\n", -1) :
        printf("%d is not in array\n", -1);

    in_num_array(a, sz, 0.0) ?
        printf("%.1f is in array\n", 0.0) :
        printf("%.1f is not in array\n", 0.0);

    in_num_array(a, sz, 69) ?
        printf("%d is in array\n", 69) :
        printf("%d is not in array\n", 69);
}
