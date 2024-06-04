#include <stdio.h>

void main() {
    char daynames[7][20] = {
        "sunday", "monday", "tuesday", "wednesday",
        "thursday", "friday", "saturday"
    };

    char colors[7][20] = {
        "red", "yellow", "pink", "green",
        "orange", "blue", "purple"
    };
    
    int dayofweek;

    printf("\nenter day of week (1 - 7) >>");
    scanf("%d", &dayofweek);

    if (dayofweek >= 1 && dayofweek <= 7) {
        //เนื่องจากลำดับของอาร์เรย์เริ่มจาก 0
        //แต่ลำดับวันเริ่มจาก 1 ดังนั้น ต้องลบออก 1
        //เพื่อให้ตรงกับลำดับของอาร์เรย์
        dayofweek -= 1;
        printf("\nday name: %s", daynames[dayofweek]);
        printf("\ncolor: %s\n", colors[dayofweek]);
    } else {
        puts("error!");
    }
}