
#include <stdio.h>

void main() {
    int n;

    printf("\nenter integer number >>");
    scanf("%d", &n);

    //ถ้าหาร 2 แล้วไม่มีค่าที่เหลือ (ค่าเป็น 0) แสดงว่าเป็นเลขคู่
    //มิฉะนั้น (ค่าที่เหลือไม่เป็น 0) แสดงว่าเป็นเลขคี่
    if (n % 2 == 0) {		
        printf("\n%d is even\n", n);
    } else {		
        printf("\n%d is odd\n", n);
    }
}