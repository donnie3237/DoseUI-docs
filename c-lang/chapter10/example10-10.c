#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

void main() {
    char time[9];

    printf(
        "\nenter time %s",
        "(format hh:mm:ss e.g 10:09:45) >>"
    );
    scanf("%s", time);
    
    //ความยาว (จำนวนอักขระทั้งหมด) ต้องเท่ากับ 8
    bool len8 = strlen(time) == 8;

    //ตำแหน่งที่ 2 และ 5 ต้องเป็น :
    bool colon1 = time[2] == ':';
    bool colon2 = time[5] == ':';
    
    //ตรวจสอบว่ารูปแบบถูกต้องทั้งหมดหรือไม่
    if (!len8 || !colon1 || !colon2) {
        printf(
            "\ninvalid time format %s",
            "(hh:mm:ss)"
        );
    } else {
        //แยกค่าชั่วโมง นาที วินาที เป็นสตริง (อาร์เรย์อักขระ)
        char h[] = { time[0], time[1], '\0' };
        char m[] = { time[3], time[4], '\0' };
        char s[] = { time[6], time[7], '\0' };

        //แปลงจากสตริงเป็นตัวเลขเพื่อการตรวจสอบ   
        int hour = atoi(h);
        int minute = atoi(m);
        int second = atoi(s);

        bool valid_hour = hour >= 0 && hour <= 23;
        bool valid_minute = minute >= 0 && minute <= 59;
        bool valid_second = second >= 0 && second <= 59;

        if (valid_hour && valid_minute && valid_second) {
            printf("\ntime: %s\n", time);
            printf("hour: %d\n", hour);
            printf("minute: %d\n", minute);
            printf("second: %d\n", second);           
        } else {
            printf("\nvalue out of range");
        }
    }

    putchar('\n');
}