#include <stdio.h>
#include <math.h>

void main() {
    float amount, rate, fv;
    int year;

    //เงินลงทุนเริ่มแรก
    printf("\ninitial investment >>");
    scanf("%f", &amount);

    //อัตราดอกเบี้ยต่อปี (%)
    printf("yearly rate (%%) >>");
    scanf("%f", &rate);

    //ระยะเวลาที่ลงทุน (ปี)
    printf("number of years >>");
    scanf("%d", &year);

    rate /= 100;   //เปลี่ยน % เป็นตัวเลข
    
    fv = amount * pow((1 + rate), year);

    printf("\nfuture value = %0.2f \n", fv);
}