#include <stdio.h>

void main() {
    int n1, n2, n3, max;

    printf("\nnumber #1 >>");
    scanf("%d", &n1);

    max = n1;   //ให้ค่าสูงสุดเท่ากับจำนวนแรกไว้ก่อน      	 

    printf("number #2 >>");
    scanf("%d", &n2);
    if (n2 > max) { 	//ถ้าจำนวนที่ 2 มากกว่าค่าสูงสุดก่อนนี้ 
        max = n2;	    //ให้จำนวนที่ 2 เป็นค่าสูงสุดแทน
    }

    printf("number #3 >>");
    scanf("%d", &n3);
    if (n3 > max) { 	//ถ้าจำนวนที่ 3 มากกว่าค่าสูงสุดก่อนนี้ 
        max = n3;	    //ให้จำนวนที่ 3 เป็นค่าสูงสุดแทน
    }

    printf("\nmax value: %d \n", max);
}