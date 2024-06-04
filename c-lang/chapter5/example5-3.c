
#include <stdio.h>

void main() {
    int quantity;
    float price, total1, total2, pay, change;
    
    //จำนวนสินค้าต้องเป็นจำนวนเต็ม
    printf("\nquantity to buy >>");	
    scanf("%d", &quantity);

    //ราคาสินค้าอาจมีทศนิยมได้
    printf("price per unit >>");    
    scanf("%f", &price);

    //ผลรวม (ก่อนหักส่วนลด)
    total1 = quantity * price;		
    printf("total (before discount): %0.2f", total1);

    //ผลรวม หลังหักส่วนลด 10%
    total2 = (total1 * (100 - 10)) / 100;
    printf("\ntotal (after discount 10%%): %0.2f", total2);

    //จำนวนเงินสดที่จ่าย
    printf("\n\npay >>");
    scanf("%f", &pay);

    //เงินทอน
    change = pay - total2;
    printf("change: %0.2f \n", change);
}