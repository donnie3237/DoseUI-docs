
#include <stdio.h>

void main() {
    int total_time_sec, remain, 
        hours, minutes, seconds;

    //กำหนดเวลาเป็นวินาที
    printf("\ntotal time in second >>");
    scanf("%d", &total_time_sec);
    
    hours = total_time_sec / 3600;  //ชั่วโมง 
    remain = total_time_sec % 3600; //หาค่าที่เหลือ

    minutes = remain / 60;          //นาที
    seconds = remain % 60;          //ค่าที่เหลือคือ วินาที

    printf("\nhours: %d", hours);
    printf("\nminutes: %d:", minutes);
    printf("\nseconds: %d \n", seconds);
    
    int x = -999;
    x--;

    printf("%d", x);

}