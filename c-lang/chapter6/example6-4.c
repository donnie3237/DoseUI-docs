#include <stdio.h>

void main() {
    float n1, n2, n3, min;

    printf("\nnumber #1 >>");
    scanf("%f", &n1);

    min = n1;   //ให้ค่าต่ำสุดเท่ากับจำนวนแรกไว้ก่อน      	 

    printf("number #2 >>");
    scanf("%f", &n2);
    if (n2 < min) { 	//ถ้าจำนวนที่ 2 น้อยกว่าค่าสูงสุดก่อนนี้ 
        min = n2;	    //ให้จำนวนที่ 2 เป็นค่าต่ำสุดแทน
    }

    printf("number #3 >>");
    scanf("%f", &n3);
    if (n3 < min) { 	//ถ้าจำนวนที่ 3 น้อยกว่าค่าสูงสุดก่อนนี้ 
        min = n3;	    //ให้จำนวนที่ 3 เป็นค่าต่ำสุดแทน
    }

    printf("\nmin value: %g \n", min);
}