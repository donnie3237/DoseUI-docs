#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define HELLO printf("Hello")

#define COUNT printf("one\t"); \
                printf("two\t"); \
                printf("three")

#define NOFILE printf("file not found\n"); \
                exit(0)

#define SEED srand(time(0))
#define RAND_1_100   1 + rand() % 100

void main() {
    putchar('\n');
    HELLO;

    putchar('\n');
    COUNT;

    SEED;
    int r = RAND_1_100;
    printf("\nrand num: %d\n", r);

    FILE *fpt;
    fpt = fopen("xxx.txt","r");
    if (fpt == NULL) {
        NOFILE;
    }
}