#include <stdio.h>

void main() {
    //ตัวนับเพื่อกำหนดขอบเขตให้แสดง 26 แถว
    int count = 1; 

    putchar('\n');

    //ตัวนับของลูป for จะให้ 3 ตัวสำหรับ 3 กลุ่มคอลัมน์
    //i เริ่มจากรหัส 32
    //j เริ่มจากรหัส 65 (A)
    //k เริ่มจากรหัส 97 (a)    
    for (int i = 32, j = 65, k = 97; 
        count <= 26; 
        i++, j++, k++) {

        //รหัส อักขระ | รหัส อักขระ | รหัส อักขระ (1 แุถว)
        printf(
            "%d  %c | %d  %c | %d  %c\n", 
            i, i, j, j, k, k
        );

        count++;
    }
}