#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

bool is_number(char *str_num) {
    int len = strlen(str_num);
    char ch;
    bool found_dot = false;

    for (int i = 0; i < len; i++) {
        ch = str_num[i];

        //ตำแหน่งแรก อาจเป็นตัวเลข, -, + หรือ .
        //ถ้าเป็น . ให้กำหนดสถานะว่าพบ . แล้ว
        //โดยจะใช้สำหรับตรวจสอบในตำแหน่งต่อๆ ไป
        //ซึ่งจะพบ . อีกไม่ได้
        if (i == 0) {
            if (isdigit(ch) || ch == '-' || ch == '+') {
                continue;
            } else if (ch == '.') {
                found_dot = true;
                continue;
            } else {
                return false;
            }
        } else {
            if (isdigit(ch)) {
                continue;

            //ถ้าพบ . ที่ตำแหน่งใด และยังไม่เคยพบมาก่อน
            //ให้กำหนดสถานะว่าพบ . แล้ว
            //โดยจะใช้สำหรับตรวจสอบในตำแหน่งต่อๆ ไป
            //ซึ่งจะพบ . อีกไม่ได้
            } else if (ch == '.' && !found_dot) {
                found_dot = true;
                continue;
            } else {
                return false;
            }
        }
    }

    return true;
}

void main() {
    char *a[] = {
        "12345", "5,555", "00", "-100", "3.143",  
        ".357", "-0.0", "-.001", "127.0.0", "+1", 
        "++1", "256GB", "5--", "4x4", "99."
        
    };

    int size = sizeof(a) / sizeof(a[0]);
    char *str;

    for (int i = 0; i < size; i++) {
        str = (is_number(a[i])) ? "is" : "is not";
        printf("\n%s %s a number", a[i], str);
    }
    putchar('\n');

}