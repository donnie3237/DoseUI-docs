#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SQUARE(n) n * n
#define ODD_EVEN(n) (n % 2 == 0) ? "even" : "odd"
#define SEED srand(time(0))
#define RAND(min, max)   min + rand() % (max - min + 1)
#define SWAP(a, b)  a = a + b; b = a - b; a = a - b;
/*
a = 3, b = 5
a = a + b = 3 + 5 = 8
b = a - b = 8 - 5 = 3
a = a - b = 8 - 3 = 5
*/

void main() {
    printf("\n9^2 = %d", SQUARE(9));
    printf("\n99 is %s", ODD_EVEN(99));

    SEED;
    printf("\nrand(20, 30): %d", RAND(20, 30));

    int a = 108, b = -1009;
    printf("\nbefore swapping: a = %d, b = %d", a, b);
    SWAP(a, b);
    printf("\nafter swapping: a = %d, b = %d\n", a, b);
}