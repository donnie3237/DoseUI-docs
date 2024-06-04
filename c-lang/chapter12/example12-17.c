#include <stdio.h>

void bubble_sort(float *a, int size) {
    float temp;
    //_Bool swapped = 0;    //optionmize

    //ลูปชั้นนอกวนตามจำนวนสมาชิกในอาร์เรย์
    for (int i = 0; i < size; i++) {
        //swapped = 0;      //optionmize

        //ลูปชั้นใน วนรอบจากสมาชิกตัวแรก 
        //ถึง ผลต่างของจำนวนสมาชิก กับ ลำดับของลูปชั้นนอก
        //(จะวนถึงตัวสุดท้ายก็ได้ แต่ไม่มีประโยชน์และทำให้ช้า)
        for (int j = 0; j < (size - i) - 1; j++) {

            //ถ้าค่าสมาชิกในลำดับลูปนั้น มากกว่า ลำดับถัดไป
            //ให้สลับตำแหน่ง
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                
                //swapped = 1;      //optionmize
            }
        }

        /*                          //optionmize
        if (!swapped) {
            break;
        }
        */
    }
}

void array_print(float arr[], int size){
    for (int i = 0; i < size; i++) {
        printf("%g ", arr[i]);
    }
}

void main() {
    float arr[] = {-1, 0, 9, -999, 0, -0, 99}; 
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("\nbefore: ");
    array_print(arr, size);

    printf("\nafter: ");
    bubble_sort(arr, size);
    array_print(arr, size);

    putchar('\n');

    float arr2[] = {.357, -3.141, 7.11, 10, -0.0, -100}; 
    size = sizeof(arr2) / sizeof(arr2[0]);
    
    printf("\nbefore: ");
    array_print(arr2, size);

    printf("\nafter: ");
    bubble_sort(arr2, size);
    array_print(arr2, size);

    putchar('\n');
}