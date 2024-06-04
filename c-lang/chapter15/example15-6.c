#include <stdio.h>

#define DEFAULT_VALUE 1

void main() {
    #ifdef DEFAULT_VALUE
        printf("\ndefault value defined!\n");
    #else
        #define DEFAULT_VALUE 1
    #endif
 
    printf("\ndefault value is %d\n", DEFAULT_VALUE);
}