#include <stdio.h>

void main() {
    int n1 = 55, n2 = 10;

    int a = n1 / n2;     
    float b = n1 / n2;    
    float c = (float)n1 / n2; 
    float d = n1 / (float)n2;   
    float e = (float)n1 / (float)n2;   
    printf(
        "\na = %d, b = %g, c = %g, d = %g, e = %g \n", 
        a, b, c, d, e
    );
}