#include <stdio.h>
#include <string.h>

#include <stdio.h>
#include <string.h>

char *substr_len(char *str, int start, int len) {
    if (len <= 0) {
        return "";
    }

    static char result[] = "";
    int r = 0;
    int stop = start + len;

    for (int i = start; i < stop; i++) {
        result[r] = str[i];
        r++;
    }
    
    return result;
}


void main() {
    char *h = "abcdefghij";
    char *s = substr_len(h, 2, 5);

    printf("%s", s);
}
