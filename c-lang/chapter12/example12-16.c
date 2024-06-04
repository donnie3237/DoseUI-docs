#include <stdio.h>
#include <stdlib.h>

void main() {
    //bank note array (เฉพาะจำนวนเต็ม)
    //50 และ 25 สตางค์แยกคิดทีหลัง
    int bna[] = {
        1000, 500, 100, 50, 
        20, 10, 5, 2, 1
    };

    float amount;
    printf("\namount to pay >>");
    scanf("%f", &amount);

    if (amount <= 0) {
        printf("\nerr! amount must be greater than 0\n");
        exit(0);
    }

    int size = sizeof(bna) / sizeof(bna[0]); 

    //เอาส่วนจำนวนเต็มไปคำนวณชนิด 1000 บาท - 1 บาท
    int amount_int = (int)amount;
    int bn;     //bank note
    int remainder = amount_int;

    for (int i = 0; i < size; i++) {
        bn = (int)(remainder / bna[i]);

        if (bn != 0) {
            printf("\nb%d: %d", bna[i], bn);
        }

        remainder %= bna[i];
    }

    //เอาส่วนทศนิยมไปคำนวณชนิด 25 และ 50 สตางค์
    float fraction = amount - amount_int;

    if (fraction >= 0.5) {
        printf("\nb0_5: 1");
        fraction -= 0.5;
    } 

    if (fraction >= 0.25) {
        printf("\nb0_25: 1");
    }

    putchar('\n');
}