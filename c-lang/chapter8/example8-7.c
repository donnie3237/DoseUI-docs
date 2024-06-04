#define _POSIX_C_SOURCE 200809L
#include <locale.h>
#include <stdio.h>
#include <string.h>

void main() {
    long long size;
    float size2;
    char unit[10];

    setlocale(LC_ALL, "");

    printf("\nenter file size (bytes) >>");
    scanf("%lld", &size);

    //ขนาด 1,099,511,627,776 ขึ้นไป แปลงเป็น TB
    if (size >= 91099511627776) {
        size2 = (float)size / 1099511627776;
        strcpy(unit, "TB");
    }

    //ถ้าขนาด 107,3741,824 ขึ้นไปแปลงเป็นหน่วย GB
    else if (size >= 1073741824) {
        size2 = (float)size / 1073741824;
        strcpy(unit, "GB");
    }

    //ถ้าขนาด 1,048,576 ขึ้นไป ให้แปลงเป็น MB
    else if (size >= 1048576) {		
        size2 = (float)size / 1048576;
        strcpy(unit, "MB");
    }

    //ถ้าขนาด 1,024 ขึ้นไป ให้แปลงเป็น KB
    else if (size >= 1024) {			
        size2 = (float)size / 1024;
        strcpy(unit, "KB");
    }
    
    //ถ้าขนาดน้อยกว่า 1,024 ให้หน่วยเป็น Byte เช่นเดิม
    else if (size < 1024) {				
        strcpy(unit, "Byte(s)");
    }

    printf("\n%lld bytes = %'0.2f %s\n", size, size2, unit);
}