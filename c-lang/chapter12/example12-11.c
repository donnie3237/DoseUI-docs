#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdlib.h>

void main() {
    char pw[20];
    printf("\nenter 6-20 chars password");
    printf("\naccept only a-z, A-Z, 0-9 >>");
    gets(pw);

    int len = strlen(pw);
    if (len < 6 || len > 20) {
        printf("\nerror! password must contain 6-20 chars\n");
        exit(0);
    } 

    bool pw_valid = true;
    for (int i = 0; i < len; i++) {
        if (!isalnum(pw[i])) {
            pw_valid = false;
            break;
        }
    }

    (pw_valid) ?
        printf("\npassword is valid\n") : 
        printf("\nerror! password contains invalid char\n"); 
        
}