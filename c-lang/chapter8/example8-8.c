#include <stdio.h>
#include <stdbool.h>

void main() {
    short start = 2020;
    short end = 2050;
    bool is_first = true;

    printf("\nleap years between %d - %d are: \n", start, end);

    for (int y = start; y <= end; y++){

        if ((y % 400 == 0) || (y % 100 != 0 && y % 4 == 0)) {
            //ถ้าไม่ใช่การพิมพ์ปีอธิกสุรทินปีแรก
            //ให้เขียนเครื่องหมาย , ไว้ข้างหน้า 
            //เพื่อคั่นกับปีก่อนนี้
            if (!is_first) {
                printf(", ");
            }
            printf("%d", y);

            is_first = false;
        }
    } 

    putchar('\n');
}
