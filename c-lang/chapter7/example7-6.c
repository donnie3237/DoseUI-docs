#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
    srand(time(0));
    int x = 0, times = 0;

    putchar('\n');

    while (x < 90) {        //ถ้าได้ค่าที่น้อยกว่า 90 ต้องวนลูปต่อไป
        x = rand() % 101;   //ค่าเลขสุ่มที่จะได้ จะอยู่ระหว่าง 0 - 100

        printf("%d ", x);
        times += 1;
    }

    printf("\nrandomized %d time(s)\n", times);
}