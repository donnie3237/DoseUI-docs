
#include <stdio.h>

void main() {
    float width, height, area, perimeter;

    printf("\nrectangle width >>");
    scanf("%f", &width);
 
    printf("rectangle height >>");
    scanf("%f", &height);

    area = width * height;
    perimeter = 2 * (width + height);

    printf("area = %g \nperimeter = %g \n", area, perimeter);
}