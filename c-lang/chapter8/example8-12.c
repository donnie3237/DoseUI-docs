#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void main() {
    char line1[100] = "";
    char line2[100] = "";
    char str_digit[10];
    int x;
    
    srand(time(0));

    for (int i = 1; i <= 6; i++) {
        x = rand() % 10;
        sprintf(str_digit, "  %d  ", x);
        strcat(line1, str_digit);
        
        switch (x) {
            case 0: strcat(line2, " ZER "); break;
            case 1: strcat(line2, " ONE "); break;
            case 2: strcat(line2, " TWO "); break;
            case 3: strcat(line2, " THR "); break;
            case 4: strcat(line2, " FOR "); break;
            case 5: strcat(line2, " FIV "); break;
            case 6: strcat(line2, " SIX "); break;
            case 7: strcat(line2, " SEV "); break;
            case 8: strcat(line2, " EGT "); break;
            case 9: strcat(line2, " NIN "); break;
        }        
    }

    printf("\n%s\n%s\n", line1, line2);
}
