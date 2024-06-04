#include <stdio.h>

void main() {
    printf("\n%5d", 555);
    printf("\n%-5d", 555);
    printf("\n%-5d\n", -555);
    
    printf("\n%10.2f", 12345.6789);
    printf("\n%-10.2f", 12345.6789);
    printf("\n%10.2f\n", -12345.6789);

    char str[] = "C Language";
    printf("\n%-10s", str);
    printf("\n%11s", str);
    printf("\n%12s", str);
    printf("\n%13s\n\n", str);

    char strf[] = "%10s\n";
    printf(strf, "1");
    printf(strf, "1 2");
    printf(strf, "1 2 3");
    printf(strf, "1 2 3 4");
    printf(strf, "1 2 3 4 5");
}