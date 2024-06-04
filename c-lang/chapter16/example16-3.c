#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define NOFILE "can't open file"; exit(0)

FILE *fpt;

//prototype
void random_lotto(int len, int num_prizes);

void main() {
    fpt = fopen("files\\ex16-3.txt", "w");
    if (fpt == NULL) {
        NOFILE;
    }

    fprintf(fpt, "%s", "\n#1st prize \n");
    random_lotto(6, 1);

    fprintf(fpt, "%s", "\n#last 2-digit prize \n");
    random_lotto(2, 1);

    fprintf(fpt, "%s", "\n#first 3-digit prize \n");
    random_lotto(3, 2);

    fprintf(fpt, "%s", "\n#last 3-digit prize \n");
    random_lotto(3, 2);

    fprintf(fpt, "%s", "\n#2nd prize \n");
    random_lotto(6, 5);

    fprintf(fpt, "%s", "\n#3rd prize \n");
    random_lotto(6, 10);

    fprintf(fpt, "%s", "\n#4th prize \n");
    random_lotto(6, 50);   

    fprintf(fpt, "%s", "\n#5th prize \n");
    random_lotto(6, 100); 

    fclose(fpt);

    printf("\ncheck lotto numbers in files\\ex16-3.txt\n");
}

//ฟังก์ชันสำหรับสร้างเลขสุ่มเพื่อออกรางวัล
//โดยพารามิเตอร์ len คือจำนวนหลักของรางวัลนั้น
//และ num_prizes คือจำนวนหมายเลขของรางวัลนั้น
void random_lotto(int len, int num_prizes) {
    srand(time(0)+rand());

    int digit;      //ลขโดดที่สุ่มได้

    //ลูป for ชั้นนอก วนตามจำนวนหมายเลขของรางวัลนั้น
    for (int i = 1; i <= num_prizes; i++) {
        
        //ลูป for ชั้นในเพื่อสร้างสุ่มเลข 0 - 9 
        //จนครบจำนวนหลักของรางวัลนั้นๆ
        //แล้วก็นำมาเรียงต่อกันจนครบ
        //แล้วเขียนลงในไฟล๋
        for (int j = 0; j < len; j++) { 
            digit = rand() % 10;
            fprintf(fpt, "%d", digit);
        }  

        //เว้นระยะระหว่างหมายเลขเท่ากับ 1 แท็บ
        fputc('\t', fpt);

        //บางรางวัลอาจมีจำนวนเกิน 10 หมายเลข 
        //เราจะแสดงเพียงแถวละไม่เกิน 10 หมายเลข
        //ดังนั้น หากเขียนจนครบจำนวนครั้งเป็นเลขเต็ม 10
        //ก็ให้ขึ้นบรรทัดใหม่ 
        if (i % 10 == 0 && i < num_prizes) {
            fputc('\n', fpt);
        }
    }

    fputc('\n', fpt);
}