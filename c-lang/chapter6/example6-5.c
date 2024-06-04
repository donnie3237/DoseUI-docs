#include <stdio.h>
#include <string.h>

void main() {
    char pw1[20], pw2[20];

    printf("\nenter password >>");
    gets(pw1);

    printf("confirm password >>");
    gets(pw2);

    if (strcmp(pw1, pw2) == 0) {
        puts("\npassword OK");
    } else {
        puts("\npassword didn't match");
    }
}