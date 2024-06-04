#include <stdio.h>

void main() {
    int count = 1;

    //ส่วนหัวตาราง
    putchar('\n');
    printf(
        "%4s\t%4s\t\t%4s\t%4s\t\t%4s\t%4s\n",
        "code", "char", "code", "char", "code", "char"
    );
    printf("------------------------------");
    printf("------------------------------\n");

    //ส่วนข้อมูลในตาราง
    for (int i = 32, j = 65, k = 97; 
        count <= 26; 
        i++, j++, k++) {
            
        printf(
            "%4d\t%-4c\t\t%4d\t%-4c\t\t%4d\t%-4c\n", 
            i, i, j, j, k, k
        );

        count++;
    }
}