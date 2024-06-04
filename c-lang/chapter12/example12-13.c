#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void main() {
    char isbn[13];
    printf("\nenter 12 first-digits of isbn >>");
    gets(isbn);

    int len = strlen(isbn);
    if (len != 12) {
        printf("\nerr! invalid isbn\n");
        exit(0);
    }

    char c;
    int d, sum = 0;

    for (int i = 0; i < len; i++) {
        c = isbn[i];
        //ถ้าไม่ใช่ตัวเลข ให้หยุดทำงาน
        if (!isdigit(c)) {
            printf("\nerr! invalid isbn\n");
            exit(0);
        }

        d = c - 48;     //char => int

        //เลขหลักคี่ ให้บวกเข้ากับผลลรวมได้เลย
        if ((i + 1) % 2 != 0) {
            sum += d;
        } 
        //เลขหลักคู่ ให้คุณ 3 ก่อนบวกเข้ากับผลลรวม
        else {
            sum += 3 * d;
        }
    }

    //หาค่า checksum โดยนำผลรวมของเลขทุกหลัก
    //มาหารแบบเอาค่าที่เหลือด้วย 10
    int checksum = 10 - (sum % 10);

    //ถ้าได้ค่าที่เหลือเป็น 10 ให้ค่า checksum เป็น 0
    //ถ้าได้เลขอื่นๆ ให้ใช้เป็นค่า checksum ได้เลย
    checksum = (checksum == 10) ?  0  : checksum;
   
    //นำ checksum ไปต่อท้าย ISBN 12 หลักแรกให้เป็น ISBN-13
    printf("\nISBN-13: %s%d\n", isbn, checksum);
}