#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
    srand(time(0));
    unsigned short sales;

    puts("\nproducts sold in past 7 days");

    for (int d = 1; d <= 7; d++) {
        printf("\nday %d", d);
        putchar('\t');

        sales = rand() % 21;    //0 - 20

        //ถ้ายอดขายของวันนั้นเป็น 0
        //ให้แสดงแค่เลข 0 ในวงเล็บ แล้วข้ามไปวันถัดไป
        if (sales == 0) {
            printf("(0)");
            continue;
        }
    
        //วนลูปเพื่อแสดง * ตามจำนวนที่ขายได้
        for (int s = 1; s <= sales; s++) {
            printf("*");
        }

		//แสดงตัวเลขจำนวนที่ขายได้ในวงเล็บต่อท้ายกราฟ
        printf(" (%d)", sales);
    }

    putchar('\n');
}