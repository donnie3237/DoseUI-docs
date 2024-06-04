#include <stdio.h>
#include <string.h>

void main() {
    printf("\n------------ ");
    printf("multiplication table");
    printf(" ------------\n");
   
    //ลูปชั้นนอก (i) สำหรับตัวเลขในแนวตั้ง
    for (int i = 1; i <= 10; i++) {
        //ลูปชั้นใน (j) สำหรับเลขในแนวนอน
        for (int j = 1; j <= 10; j++) {  
            //คอลัมน์แรก ความกว้างเป็น 2 และจัดชิดซ้าย
            if (j == 1) {
                printf("%-2d", i * j);
            } 
            //คอลัมน์ถัดไป ความกว้างเป็น 5 และจัดชิดขวา
            else {
                 printf("%5d", i * j);
            }
        }
        //ถ้าครบลูป j ให้ขึ้นแถวใหม่
        putchar('\n');     			
    }
}