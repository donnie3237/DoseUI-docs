#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool str_startswith(char *mainstr, char *substr) {
    int len = strlen(substr);

    for (int i = 0; i < len; i++) {
        if (substr[i] != mainstr[i]) {
            return false;
        }
    }
    return true;
}

bool str_endswith(char *mainstr, char *substr) {
    int main_len = strlen(mainstr);
    int sub_len = strlen(substr);
    int start = main_len - sub_len;

    int j = 0;
    for (int i = start; i < main_len; i++) {
        if (mainstr[i] != substr[j]) {
            return false;
        }
        j++;
    }
    return true;
}

void main() {
    char *url = "https://www.developerthai.com";
    char *protocol = "https";
    char *domain = ".co.th";

    printf("\n%s\n", url);

    if (str_startswith(url, protocol)) {
        printf("\nstart with: %s", protocol);
    } else {
        printf("\ndoesn't start with: %s", protocol);
    }

    if (str_endswith(url, domain)) {
        printf("\nend with: %s", domain);
    } else {
        printf("\ndoesn't end with: %s", domain);
    }

    putchar('\n');
}