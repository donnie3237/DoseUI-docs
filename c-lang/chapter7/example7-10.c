#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

void main() {
    srand(time(0));
    //สร้างเลขสุ่มสำหรับให้ทาย
    int rand_num = 1 + rand() % (100 - 1 + 1);
    int count = 1;              //ทายครั้งที่เท่าไหร่
    const int MAX = 7;        //ทายผิดไม่เกิน 7 ครั้ง
    int guess_num;              //ค่าที่ผู้เล่นทายแต่ละครั้ง

    printf("\n*** enter integer number 1-100 ***\n");
    do {
        //รับค่าตัวเลขที่ทายในแต่ละครั้ง
        printf("\nguesstimate #%d >>", count);
        scanf("%d", &guess_num);

        //ถ้าเลขที่ผู้ใช้ทาย มากกว่า เลขที่สุ่มได้
        //ให้แสดงข้อความว่า น้อยกว่านี้ 
        //หมายถึง ให้ใส่เลขที่น้อยกว่านี้
        if (guess_num > rand_num) {
            printf("less than %d\n", guess_num);
        } 
        //ถ้าเลขที่ผู้ใช้ทาย น้อยกว่า เลขที่สุ่มได้
        //ให้แสดงข้อความว่า มากกว่านี้ 
        //หมายถึง ให้ใส่เลขที่มากกว่านี้        
        else if (guess_num < rand_num) {
            printf("greater than %d\n", guess_num);
        }
        //ถ้าเลขที่ผู้ใช้ทาย เท่ากับ เลขที่สุ่มได้
        //นั่นคือทายถูกต้อง ให้ออกจากลูป
        else if (guess_num == rand_num) {
            printf("yes! the number is %d\n", guess_num);
            break;
        }

        //ถ้าทายผิดครบจำนวนครั้งที่กำหนดไว้
        //ให้จบเกม และออกจากลูป
        if (count == MAX) {
            printf("\ngame over!, you guessed more than %d times\n", MAX);
            break;
        }

        count++;    //เพิ่มตัวนับ ว่าเป็นการทายครั้งที่เท่าไร
        
    } while (true);
}
