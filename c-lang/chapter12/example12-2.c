#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void main() {
    char *text[] = {
        " ZER ", " ONE ", " TWO ", " THR ", " FOR ",
        " FIV ", " SIX ", " SEV ", " EGT ", " NIN "
    };

    char line1[100] = "";   //บรรทัดที่ 1 (ตัวเลข)
    char line2[100] = "";   //บรรทัดที่ 2 (ตัวย่อของคำอ่าน)
    char str_digit[10];

    srand(time(0));
    rand();

    int x;

    for (int i = 0; i < 6; i++) {
        x = rand() % 10;
        sprintf(str_digit, "  %d  ", x);
        strcat(line1, str_digit);
        strcat(line2, text[x]);
    }

    printf("\n%s\n%s\n", line1, line2);
}


