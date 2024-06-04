#include <stdio.h>

void main() {
    //สมมติว่าเป็นยอดขายสินค้าแต่ละชนิด
    int p[] = {8, 4, 9, 2, 7};

    //ส่วนหัวตาราง
    printf("\n%7s\t\t%5s\t\t%-10s", "product", "sales", "chart");

    //วนลูปเท่ากับจำนวนสินค้าหรือสมาชิกในอาร์เรย์
    for (int i = 0; i < 5; i++) {
        //แสดงข้อมูล 2 คอลัมน์แรก
        printf("\n%7d\t\t%5d\t\t", (i + 1), p[i]);
        
        //แสดงกราฟ โดยให้ * แทนสินค้า 1 ชิ้น
        //ซึ่งจะวนลูปเท่ากับจำนวนสินค้าที่ขายได้
        for (int j = 1; j <= p[i]; j++) {
            printf("*");
        }
    }

    putchar('\n');

}