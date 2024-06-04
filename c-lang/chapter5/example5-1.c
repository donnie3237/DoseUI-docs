
#include <stdio.h>

void main() {
    int a = 108;
    short b = -1009;
    long c;      //สร้างตัวแปรที่สามเพื่อใช้พักข้อมูล 

    printf("\nbefore swapping: a = %d, b = %d \n", a, b);

    c = a;		//ให้ตัวแปรที่สาม มีค่าเท่ากับตัวแปรที่หนึ่ง
    a = b;	    //นำค่าที่สอง ไปเก็บในตัวแปรแรก
    b = c;		//นำค่าแรกที่เก็บในตัวแปรที่สาม ไปเก็บในตัวแปรที่สอง
    printf("after swapping: a = %d, b = %d \n", a, b);

}

