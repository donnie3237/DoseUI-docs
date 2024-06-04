#include <stdio.h>

#define PI 3.14    //มาโครชื่อ PI มาค่าเป็น 3.14
#define VAT 7
#define TRUE 1
#define FALSE 0
#define ERR_NOFILE "error, file not found"

void main() {
	#undef PI
	#define PI 3.14159
    printf("\npi = %g\n", PI);

    int q = 5, p = 100;
    float total = (p * q) * (1 + VAT/100.0);
    printf("total inc. vat = %g\n", total);

    if (TRUE) {
        puts("Yes! TRUE = 1\n");
    } else {
        puts("No! TRUE != 1\n");
    }

    FILE *fpt;
    fpt = fopen("xxx.txt","r");
    if (fpt == NULL) {
        puts(ERR_NOFILE);
    }
}

