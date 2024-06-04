#include <stdio.h>
#include <string.h>

void main() {
    int y;
    char gen[50];

    printf("\nyear born (B.E.) >>");
    scanf("%d", &y);

    if (y <= 2443) {                         //2443 และต่ำกว่า
        strcpy(gen, "lost generation");
    } 
    else if ((y >= 2444) && (y <= 2467)) {	//2444 - 2467
        strcpy(gen, "greatest generation");
    }
    else if ((y >= 2468) && (y <= 2488)) {	//2468 - 2488
         strcpy(gen, "silent generation");
    }
    else if ((y >= 2489) && (y <= 2507)) {	//2489 - 2507
         strcpy(gen, "baby boomer generation");
    }
    else if ((y >= 2508) && (y <= 2519)) {	//2508 - 2519
         strcpy(gen, "generation X");
    }
    else if ((y >= 2520) && (y <= 2538)){	//2520 - 2538
         strcpy(gen, "generation Y");
    }
    else if ((y >= 2539) && (y <= 2555)) {	//2539 - 2555
         strcpy(gen, "generation Z");
    }
    else {
         strcpy(gen, "unknown generation");
    }

    printf("you are %s \n", gen); 
}