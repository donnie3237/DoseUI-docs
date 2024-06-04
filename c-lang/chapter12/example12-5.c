#include <stdio.h>
#include <string.h>

char *str_reverse(char *str) {
    static char result[] = "";
    int len = strlen(str);
    int n = len - 1;
    for (int i = 0; i < len; i++) {
        result[i] = str[n];
        n--;
    }

    return result;
}

void main() {
    char *s = "string reverse";
    char *r = str_reverse(s);

    printf("\nbefor: %s", s);
    printf("\nafter: %s\n", r);
    
}