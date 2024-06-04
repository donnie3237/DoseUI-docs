#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
    srand(time(0));
    rand();
    
    printf("\n 0 - 10 => %d", rand() % 11);
    printf("\n 0 - 50 => %d", rand() % 51);
    printf("\n 0 - 100 => %d", rand() % 101);
    printf("\n 0 - 999 => %d", rand() % 1000);
    printf("\n----------------");
    printf("\n 1 - 10 => %d", (1  + rand() % (10 - 1 + 1)));
    printf("\n 50 - 100 => %d", (50  + rand() % (100 - 50 + 1)));
    putchar('\n');

}

