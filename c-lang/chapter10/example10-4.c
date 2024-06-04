
#include <stdio.h>

void main() {
    int a[] = {555, 7, 11, -101, 108, -1009, 999};
    int size = sizeof(a) / sizeof(a[0]);

    //เริ่มแรก ให้ค่าต่ำสุดและสูงสุดเท่ากับสมาชิดตัวแรกไว้ก่อน
    int min = a[0], max = min;
    int odds = 0, evens = 0;

    for (int i = 0; i < size; i++) {
        //ถ้าสมาชิกตัวนี้ น้อยกว่าค่าต่ำสุดเดิม
        //ก็กำหนดให้เป็นค่าต่ำสุดแทนค่าเดิม
        if (a[i] < min) {
            min = a[i];
        }

        //ถ้าสมาชิกตัวนี้ มากกว่าค่าสูงสุดเดิม
        //ก็กำหนดให้เป็นค่าสูงสุดแทนค่าเดิม
        if (a[i] > max) {
            max = a[i];
        }

        if (a[i] % 2 == 0) {
            evens++;
        } else {
            odds++;
        }
    }

    printf("\nmin = %d, max = %d", min, max);
    printf("\nodds = %d, evens = %d\n", odds, evens);

}