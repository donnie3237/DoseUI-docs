#include <stdio.h>

void main() {
    int arr[3][6] = {
        {1, 3, 5, 7}, {2, 4, 6, 8, 10, 12}, {11, 22, 33}
    };
    //ความจริงขนาดของอาร์เรย์ เรากำหนดไว้ล่วงหน้า หรือรู้อยู่แล้ว
    //แต่ในที่นี้จะลองคำนวณเพื่อทบทวนสิ่งที่เราได้เรียนรู้มา

    int num_subarr = sizeof(arr) / sizeof(arr[0]);	//3
    int num_el_of_subarr = sizeof(arr[0]) / sizeof(arr[0][0]);

    //ลูป i ใช้เข้าถึงถึงแต่ละอาร์เรย์ย่อย
    for (int i = 0; i < num_subarr; i++) { 	

	    //ลูป j ใช้เข้าถึงสมาชิกแต่ละตัวในอาร์เรย์ย่อย
        printf("arr[%d] => ", i);
        for (int j = 0; j < num_el_of_subarr; j++) {	
            printf("%d ", arr[i][j]);
        }

        putchar('\n');
    }
}