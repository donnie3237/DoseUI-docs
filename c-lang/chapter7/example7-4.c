#include <stdio.h>

void main() {
    int remainder = 0;
    for (int n = 1; n <= 10; n++) {
        remainder = n % 2;
        switch(remainder) {
            case 0: 
                printf("%d is even\n", n); 
                break;
            default: 
                printf("%d is odd\n", n); 
                break;
        }
    }
}