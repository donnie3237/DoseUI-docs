
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
    srand(time(0));
    rand();

    //รางวัลเลขท้าย 2 ตัว
    printf("\nlast two digits prize: %d %d", rand()%10, rand()%10);

    //รางวัลเลขหน้า 3 ตัว
    printf("\nfirst three digits prize: %d %d %d", rand()%10, rand()%10, rand()%10);
    
    //รางวัลเลขท้าย 3 ตัว
    printf("\nlast three digits prize: %d %d %d \n", rand()%10, rand()%10, rand()%10);

}