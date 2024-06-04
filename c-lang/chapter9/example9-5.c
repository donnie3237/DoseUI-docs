#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rand_range(int min, int max) {		
    if (min < 0 || max < 0 || max < min) {
        return -1;
    }

    srand(time(0));
    rand();

    return min + rand() % (max - min + 1);
}

void main() {
    putchar('\n');

    int r1 = rand_range(1, 10);
    printf("#1 rand_range(1, 10): %d\n", r1);

    printf("#2 rand_range(50, 100): %d\n", 
            rand_range(50, 100));

    //ถ้ากำหนดพารามิเตอร์ไม่ตรงตามเงื่อนไข
    int r3 = rand_range(100, 0);
    printf("#3 rand_range(100, 10): %d\n", r3);

    printf("#4 rand_range(1, 20) ");
    if (rand_range(1, 20) % 2 == 0) {
        printf("result is even\n");
    } else {
        printf("result is odd\n");
    }

    printf("#5 rand_range(10, 1) ");
    (rand_range(10, 1) >= 0) ?
        printf("parameters ok") :
        printf("parameters incorrect");

    putchar('\n');
}
