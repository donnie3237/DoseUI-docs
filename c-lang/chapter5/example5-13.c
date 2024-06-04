#include <stdio.h>
#include <math.h>

void main() {
    float radius, volume;

    printf("\nradius of sphere >>");
    scanf("%f", &radius);

    volume = (4/3) * (3.14) * pow(radius, 3);

    printf("volume = %g \n", volume);
}