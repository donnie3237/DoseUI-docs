#define _POSIX_C_SOURCE 200809L
#include <locale.h>
#include <stdio.h>

void main() {
    setlocale(LC_ALL, "");

    int withdraw, balance = 30000;

    printf("\nbalance: %'d",  balance);

    //จำนวนเงินที่ต้องการถอน
    printf("\namount to withdraw >>");
    scanf("%d", &withdraw);

    //ถ้ายอดเงินคงเหลือไม่พอ
    if (balance < withdraw) {    
        puts("insufficient balance");
    } 
    //ถ้าจำนวนที่จะถอนเกิน 20,000
    else if (withdraw > 20000) {    
        puts("can't withdraw more than 20000");
    } 
    //ถ้าไม่ใช่จำนวนเต็มร้อย
    else if (withdraw % 100 != 0) {   
        puts("amount to withdraw must be the multiples of 100");
    } 
    //ถ้าไม่ตรงตามเงื่อนไขทั้งหมด แสดงว่าถอนได้
    else {       
        balance -= withdraw;
    }

    printf("\nbalance: %'d \n", balance);

}