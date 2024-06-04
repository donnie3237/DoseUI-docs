#include <stdio.h>
#include <stdbool.h>

bool in_str_array(char *str_array[], int size, char *find_str) {
    char *pt;
    
    for (int i = 0; i < size; i++) {
        pt = str_array[i];
        if (pt == find_str) {
            return true;
        }
    }

    return false;
}

void main() {
    char *str[] = {
        "apple", "banana", "coconut", "durian"
    };
    int sz = sizeof(str) / sizeof(str[0]);

    putchar('\n');

    char *f1;

    f1 = "durian";
    in_str_array(str, sz, f1) ?
        printf("%s is in array\n", f1) :
        printf("%s is not in array\n", f1);
    
    
    f1 = "Durian";
    in_str_array(str, sz, f1) ?
        printf("%s is in array\n", f1) :
        printf("%s is not in array\n", f1);   
    
}