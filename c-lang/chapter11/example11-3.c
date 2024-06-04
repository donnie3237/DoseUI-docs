#include <stdio.h>
#include <string.h>
#include <ctype.h>

char *num_to_text(int digit) {
    static char result[20] = "";
    
    char text[10][20] = {
        "zero", "one", "two", "three", "four",
        "five", "six", "seven", "eight", "nine"
    };

    if (digit >= 0 && digit <= 9) {
        strcpy(result, text[digit]);
    } 

    return result;
}

void main() {
    char d_c, w[20];
    int d_i;
    
    printf("\nenter 1 digit >>");
    d_c = getchar();

    if (isdigit(d_c)) {
        //แปลงอักขระเป็นตัวเลข โดยหาความแตกต่างของรหัส
        d_i = d_c - 48;

        //เรียกฟังก์ชันพร้อมส่งตัวเลขไปให้
        //แล้วนำผลลัพธ์ไปเก็บตัวแปร        
        strcpy(w, num_to_text(d_i));
        
        printf("\n%d pronouce %s\n", d_i, w);
    } else {
        printf("\nplease enter 1 ditgit\n");
    }
}