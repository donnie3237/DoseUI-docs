#include <stdio.h>

void main() {
    int num1, num2;

    puts("\nUsing &");
    printf("First Number >>");
    scanf("%d", &num1);
    //getchar();        //ไม่มีก็ได้ เพราะรับข้อมูลตัวเลข

    printf("Second Number >>");
    scanf("%d", &num2);
    //getchar();

    printf("%d + %d = %d", num1, num2, (num1 + num2));

    puts("\n----------------------");
    puts("\nWithout &");

    printf("First Number >>");
    scanf("%d", num1);      //ไม่ระบุนำหน้าตัวแปร num1
    //getchar();

    printf("Second Number >>");
    scanf("%d", num2);      //ไม่ระบุนำหน้าตัวแปร num2
    //getchar();

    printf("%d + %d = %d", num1, num2, (num1 + num2));
}