#include <stdio.h>
#include <stdlib.h>

void main() {
    struct calendar {
        int day, month, year;
    } cal;

    printf(
        "\nenter day month year\n%s",
        "e.g 20 8 2022 >>"
    );

    scanf("%d %d %d", &cal.day, &cal.month, &cal.year);

    if (cal.day < 1 || cal.day > 31) {
        printf("\nday must between 1 - 31\n");
        exit(0);
    } else if (cal.month < 1 || cal.month > 12) {
        printf("\nmonth must be between 1 - 12\n");
        exit(0);
    } else if (cal.year < 1 || cal.year > 9999) {
        printf("\nyear must be between 1 - 9999\n");
        exit(0);
    } 

    //เดือนที่ 4, 6, 9 และ 11 มีได้ไม่เกิน 30 วัน
    if (cal.month==4 || cal.month==6 || 
        cal.month==9 || cal.month==11) {

        if (cal.day > 30) {
            printf("\nthis month has 30 days\n");
            exit(0);            
        }
    } 
    
    //ถ้าเป็นเดือนกุมภาพันธ์ ต้องตรวจสอบว่าเป็นปีอธิกสุรทินหรือไม่
    //ถ้าไม่ใช่ก็มีได้ไม่เกิน 28 วัน แต่ถ้าใช่ก็มีได้ไม่เกิน 29 วัน
    else if (cal.month == 2) {
        if ((cal.year % 400 == 0) || 
            (cal.year % 100 != 0 && cal.year % 4 == 0)) {

            if (cal.day > 29) {
                printf("\nthis month of this year has 29 days\n");
                exit(0);
            }
        } else if (cal.day > 28) {
            printf("\nthis month of this year has 28 days\n");
            exit(0);
        }
        
    }

    printf("\ncalendar ok!\n");
}
