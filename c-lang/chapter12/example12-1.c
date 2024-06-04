#include <stdio.h>

void main() {
    char xo[3][3] = {
        {'X', 'O', 'O'},    //row 1
        {'O', 'X', 'X'},    //row 2
        {'X', 'O', 'X'}     //row 3
    };


    char *row_sep = "\n+---+---+---+\n";
    //เส้นแบ่งระหว่างแถว

    printf(row_sep);

    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            printf("| %c ", xo[row][col]);
            //อักขระ '|' ใช้เป็นเส้นขอบด้านข้าง
        }
        printf("|");    
        //ขอบของคอลัมน์สุดท้ายของแต่ละแถว
                        
        printf(row_sep);
    }
}