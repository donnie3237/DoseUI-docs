#include <stdio.h>
#include <string.h>

char *substr_range(char *str, int start, int stop) {
    int len = strlen(str);
    if (start > len) {
        return "";
    }

    static char result[100] = "";
    int r = 0;

    if (start < stop) {
        for (int i = start; i <= stop; i++) {
            result[r] = str[i];
            r++;
        }
    } else {
        for (int i = start; i >= stop; i--) {
            result[r] = str[i];
            r++;
        }
    }

    return result;
}

void main() {
    char *str = "abcdefghij";
    char *s = substr_range(str, 5, 2);

    printf("%s", s);
}