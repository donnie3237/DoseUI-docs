#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define NOFILE "can't open file"; exit(0)

void main() {
    FILE *fpt;
    fpt = fopen("files\\ex16-2.txt", "a+");
    if (fpt == NULL) {
        NOFILE;
    }

    printf(
        "\npress ctrl+z to cancel\n%s",
        "--------------------------\n"
    );

    char str[150];
    int n = 1;
    time_t tm;
    char *t, last_char;

    while (1) {
         printf("\nwhat's happening? >>");
         gets(str);

        if (feof(stdin)) {
			break;
		}

        time(&tm);
        t = ctime(&tm);         //มี \n ต่อท้าย

        //ตัด \n ท้ายสตริงวันเวลาโดยอักขระตัวนี้จะเป็นสุดท้าย
        //ดังนั้น เราก็ตรวจสอบตำแหน่งจากความยาวของสตริง
        //ต่อไปก็ลบออก 1 เพราะตำแหน่งอักขระเริ่มจาก 0
        //แล้วเปลี่ยนอักขระในตำแหน่งนั้น (\n) เป็นอักขระว่าง (\0)
        last_char = strlen(t) - 1;
		t[last_char] = '\0';

        fprintf(fpt, "%s  %s \n", t, str);

        n++;
    }

    fclose(fpt);  
}