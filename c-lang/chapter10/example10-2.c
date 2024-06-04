#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void main() {
    //แม้ลูกเต๋าจะมี 6 หน้า (1 - 6)
    //แต่เพื่อป้องกันความสับสน 
    //จะให้ตรงลำดับอาร์เรย์ตรงกับเลขหน้าของลูกเต๋า
    //โดยให้อาร์เรย์มีสมาชิกจากลำดับ 0 - 6
    //แต่ลำดับ 0 เราจะไม่ใช้งาน    
    int faces[7] = { }; 

    srand(time(0) + rand());
    int r;

    //rand_min_max = min + rand() % (max - min + 1)
    for (int i = 1; i <= 1000; i++) {
        r = 1 + rand() % (6 - 1 + 1);

        //ถ้าได้หน้าใด ก็ให้เพิ่มจำนวนหน้านั้นไปอีก 1
        faces[r]++;
    }

    printf("\n%-4s\t\t%-9s\n", "face", "frequency");
    for (int i = 1; i <= 6; i++) {
        printf("%4d\t\t%9d\n", i, faces[i]);
    }
}