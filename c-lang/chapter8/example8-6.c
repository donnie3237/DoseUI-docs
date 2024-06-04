#define _POSIX_C_SOURCE 200809L
#include <locale.h>
#include <stdio.h>

void main() {
    //1 km เท่ากับ
    float ft = 3280.84;     //ฟุต (foot)
    float yd = 1093.61;     //หลา (yard)
    float ml = 0.62;        //ไมล์ (mile)

    //ส่วนหัวตาราง
    printf("\n%2s%14s%14s%10s", "km", "foot", "yard", "mile");
    printf("\n------------------------------------------");

    //ข้อมูลในตาราง
    setlocale(LC_ALL, "");
    for (int km = 1; km <= 10; km++) {
        printf(
            "\n%'2d%'14.2f%'14.2f%'10.2f", 
            km, km*ft, km*yd, km*ml
        );
    }
    putchar('\n');
}
