#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define NOFILE "can't open file"; exit(0)

void main() {
    FILE *fpt;
    fpt = fopen("files\\ex16-1.txt", "a+");
    if (fpt == NULL) {
        NOFILE;
    }

    printf(
        "\npress ctrl+z to cancel\n%s",
        "--------------------------\n"
    );

    char quote[150];
    int n = 1;
    while (1) {
         printf("\nenter quote >>");
         gets(quote);

        //ถ้ากด <ctrl+z> ให้หยุดรับข้อมูล
        if (feof(stdin)) {
			break;
		}

        fputs(quote, fpt);
        fputc('\n', fpt);

        n++;
    }

    printf("\n--- list of quotes ---\n");

    //เลื่อนพอยเตอร์กลับไปยังจุดเริ่มต้น เพื่ออ่านไฟล์
    rewind(fpt);

    //ถ้ายังไม่สิ้นสุดไฟล์ ก็อ่านไปเรื่อยๆ
    while (!feof(fpt)) {	
        printf("%c", fgetc(fpt));
    }

    fclose(fpt);  
}