#include <stdio.h>

void main() {
    int n, fac;

    printf("\nnumber (>=0) to find factorial >>");
    scanf("%d", &n);

    if (n >= 0) {
        fac = 1;
        for (int i = n; i >= 1; i--) {  
            fac *= i;
        }

        //กรณีใช้ลูป while
        /*
        int i = n;
        while (i >= 1) {
            fac *= i;
            i -= 1;
        }
        */

        printf("\n%d! = %d\n", n, fac);

    } else {
        printf("\nerror! number must be >= 0\n");
    }   
}

