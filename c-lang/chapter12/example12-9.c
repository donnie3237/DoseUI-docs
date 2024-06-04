#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

bool is_uint(char *str_num) {
    int len = strlen(str_num);
    char c;
    
    for (int i = 0; i < len; i++) {
        c = str_num[i];
        
        //ตำแหน่งแรก อาจเป็น 0 - 9 หริอ + ก็ได้
        if (i == 0 && (isdigit(c) || c == '+')) {
            continue;
        }

        if (!isdigit(c)) {
            return false;
        }
    }

    return true;
}

void main() {
    char *a[] = {
        "12345", "0", "-100", 
        "+1", "3.143", "007"
    };

    char *str;

    for (int i = 0; i < 5; i++) {
        str = (is_uint(a[i])) ? "is" : "is not";
        printf("\n%s %s unsigned int", a[i], str);
    }

    putchar('\n');
}