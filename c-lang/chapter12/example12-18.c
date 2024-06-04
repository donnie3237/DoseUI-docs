#include <stdio.h>

void selection_sort(float *a, int size) {
    int temp, cmp, min, min_index;
    //ความจริงไม่ต้องมีตัวแปร cmp เลยก็ได้
    //โดยใช้ a[i] เพียงอย่างเดียว
    //แต่เพื่อให้ตรงกับคำอธิบายที่ผ่านมา
    //จึงมีตัวแปร cmp เข้ามาร่วมด้วย

    for (int i = 0; i < size; i++) {
        cmp = a[i];     //ตัวเทียบในแต่ละรอบ

        //ลูปชั้นค้นหาสมาชิกที่มีค่าน้อยที่สุด
        //ในตำแหน่งทั้งหมดที่อยู่ถัดจากตัวเทียบ
        min = cmp;
        for (int j = i; j < size; j++) {
            if (a[j] < min) {
                min = a[j];
                min_index = j;
            }
        }

        //ถ้าค่าน้อยที่สุดในช่วงนั้น 
        //น้อยกว้าค่าของตัวเทียบ ให้สลับกัน
        if (min < cmp) {   //cmp = a[i]
            temp = a[i];
            a[i] = min;
            a[min_index] = temp;
        }
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
    selection_sort(arr, size);
    array_print(arr, size);

    putchar('\n');

    float arr2[] = {.357, -3.141, 7.11, 10, -0.0, -100}; 
    size = sizeof(arr2) / sizeof(arr2[0]);
    
    printf("\nbefore: ");
    array_print(arr2, size);

    printf("\nafter: ");
    selection_sort(arr2, size);
    array_print(arr2, size);

    putchar('\n');
}