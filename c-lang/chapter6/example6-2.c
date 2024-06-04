
#include <stdio.h>

void main() {
    int n;

    printf("\nenter integer number >>");
    scanf("%d", &n);

    if (n % 2 == 0) {		//ถ้าหาร 2 แล้วไม่มีค่าที่เหลือ (ค่าเป็น 0) แสดงว่าเป็นเลขคู่
        printf("\n%d is even\n", n);
    }

    if (n % 2 != 0) {		//ถ้าหาร 2 แล้วค่าที่เหลือไม่เป็น 0 แสดงว่าเป็นเลขคี่
        printf("\n%d is odd\n", n);
    }
}