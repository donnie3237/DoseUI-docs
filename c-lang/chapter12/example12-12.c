#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdlib.h>

void main() {
    char pw[20];
    printf("\nenter 6-20 chars for password");
    printf("\naccept only a-z, A-Z, 0-9 >>");
    gets(pw);

    int len = strlen(pw);
    if (len < 6 || len > 20) {
        printf("\nerr! pswd must contain 6-20 chars\n");
        exit(0);
    } 

    bool pw_valid = true;
    char c;
    int n_lw = 0, n_up = 0, n_dg = 0;

    for (int i = 0; i < len; i++) {
        c = pw[i];
        if (!isalnum(c)) {
            pw_valid = false;
            break;
        } else if (islower(c)) {
            n_lw++;
        } else if (isupper(c)) {
            n_up++;
        } else if (isdigit(c)) {
            n_dg++;
        }
    }

    if (!pw_valid) {
        printf("\nerr! pswd contains invalid char\n"); 
    } else if (n_lw < 2) {
        printf("\nerr! pswd must contain 2+ lower letters\n"); 
    } else if (n_up < 2) {
        printf("\nerr! pswd must contain 2+ upper letters\n"); 
    } else if (n_dg < 2) {
        printf("\nerr! pswd must contain 2+ digits\n"); 
    } else {
        printf("\nok! pswd is valid\n");
    }           
}