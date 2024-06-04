#include <stdio.h>

void main() {
    float lat, lon;

    printf("\nenter latitude >>");
    scanf("%f", &lat);
    if ((lat >= -90) && (lat <= 90)) {
        puts("latitude ok");
    } else { 
        puts("latitude incorrect!");
    }

    printf("\nenter longitude >>");
    scanf("%f", &lon);
    if ((lon >= -180) && (lat <= 180)) {
        puts("longitude ok");
    } else { 
        puts("longitude incorrect!");
    }
}