#include <stdio.h>
#include <string.h>

void array_reverse(float arr[], int size, float *result) {
    int n = size - 1;
    for (int i = 0; i < size; i++) {
        result[i] = arr[n];
        n--;
    }
}

void array_print(float arr[], int size){
    for (int i = 0; i < size; i++) {
        printf("%g ", arr[i]);
    }
}

void main() {   
    float a[] = {11, 7.5, -4, 9.9};
    int size = sizeof(a) / sizeof(a[0]);

    float r[size];
    array_reverse(a, size, r);

    printf("\nbefore reverse: ");
    array_print(a, size);

    printf("\n\nafter reverse: ");
    array_print(r, size);

    putchar('\n');
}