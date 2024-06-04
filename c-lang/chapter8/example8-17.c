#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void main() {
   int d, m, y, days_in_month;
   char err[100];

    printf("\nenter day month year (ce)");
    printf("\n(example: 19 7 2023) >>");
    scanf("%d%d%d", &d, &m, &y);

    //ถ้าเป็นเดือนกุมภาพันธ์
    if (m==2) {
        //ถ้าตรงกับปีอธิกสุรทิน (leap year) จะมีได้ 29 วัน
        //มิฉะนั้น จะมีได้เพียง 28 วัน
        if ((y % 400 == 0) || (y % 100 != 0 && y % 4 == 0)) {    
            days_in_month = 29;
        } else {
            days_in_month = 28;
        }            
    } 
    //ถ้าเป็นเดือนที่ 4, 6, 9, 11
    //จะมีได้ไม่เกิน 30 วัน
    else if (m==4 ||m==6 || m==9 || m==11) {
        days_in_month = 30;
    } 
    //ถ้าเป็นเดือนอื่นๆ จะมีได้ไม่้เกิน 31 วัน
    else {
        days_in_month = 31;
    }            

    //ช่วงวันที่ เดือน ปี ที่เป็นไปได้
    bool valid_d = (d >= 1) && (d <= days_in_month);
    bool valid_m = (m >= 1) && (m <= 12);
    bool valid_y = (y >= 1) && (y <= 9999);

    if (valid_d && valid_m && valid_y) {
        //จัดรูปแบบโดยหากเป็นเลขหลักเดียว ให้เติม 0 ข้างหน้า
        printf("date is %02d/%02d/%02d \n", d, m, y);
    } else if (!valid_d) {
        puts("\ninvalid day");
    } else if (!valid_m) {
        puts("\ninvalid month");
    } else if (!valid_y) {
        puts("\ninvalid year");
    }
}
    
