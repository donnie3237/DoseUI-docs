#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void main() {
    char password[10];

    putchar('\n');
    
    //ให้เงื่อนไขเป็น true เพื่อวนลูปไปเรื่อยๆ
    while (true) {  
        printf("enter password >>");
        gets(password);

        //ถ้าใส่รหัสถูก ให้ออกจากลูป  while
        if (strcmp(password, "567890") == 0 ) {
            break;     
        }
    }
    puts("thanks!");
}