#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void main() {
    int num, digit;
    char str_digit[100] = "";   //จัดเก็บเลขโดดแบบสตริง
    char str_separated_digits[100] = "";    
    //ใช้จัดเก็บเลขโดดที่แยกออกมาแล้ว และเชื่อมต่อเป็นสตริง

    bool is_first = true;

    printf("\nenter +integer number >>");
    scanf("%d", &num);
    
    int remainder = num;

    do {
        digit = remainder % 10;

        //แปลงตัวเลขที่คัดแยกได้เป็นสตริง
        //ถ้าเป็นการแยกครั้งแรก (ขวาสุด) ไม่ต้องมี , ต่อท้าย
        //มิฉะนั้น (ครั้งต่อๆ ไป) ให้มี , ต่อท้าย
        if (is_first) {
            sprintf(str_separated_digits, "%d", digit);
        } else {
           sprintf(str_separated_digits, "%d, ", digit);     
        }

        //นำสตริงที่ได้จากการคัดแยกครั้งล่าสุด
        //มาวางต่อท้ายเลขที่คัดแยกครั้งก่อนนี้
        strcat(str_separated_digits, str_digit);

        //นำสตริงจัดเลขที่คัดแยกแล้วทั้งหมด
        //ไปเก็บแทนที่ค่าของตัวแปรใช้จัดเก็บการคัดแยกล่าสุด
        //เพื่อจะนำไปต่อท้ายเลขที่คัดแยกในลูปต่อไป
        strcpy(str_digit, str_separated_digits);

        //หลังการคัดแยกครั้งแรกผ่านไปแล้ว 
        //เซตค่าตัวแปรเป็น false เพื่อบ่งชี้ว่าครั้งต่อๆ ไปไม่ใช่ครั้งแรก
        is_first = false;

        remainder /= 10;

    } while (remainder != 0);

    printf("\nseparated digit(s): %s\n", str_separated_digits);
}

