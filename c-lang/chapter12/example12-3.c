#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void array_rand(int size, int min, int max, int *result) {
    srand(time(0));
    
    //ถ้าค่าต่ำสุดมากกว่าค่าสูงสุด ให้สลับค่ากัน
    //เพื่อยังคงให้มีผลลัพธ์เกิดขึ้นตามเดิม
    if (min > max) {
        int temp = min;
        min = max;
        max = temp;
    }

    for (int i = 0; i < size; i++) {
        result[i] = min + rand() % (max - min + 1);
    }
}

void main() {
    int size = 5, min = 10, max = 100;
    int a[size];

    array_rand(size, min, max, a);  //&a[0]

    printf("\nresult array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    putchar('\n');
}