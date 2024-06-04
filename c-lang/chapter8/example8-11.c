#include <stdio.h>
#include <math.h>
#include <string.h>

void main() {
    float weight, height, bmi;
    char shape[50];

    printf("\nweight (kg) >>");
    scanf("%f", &weight);

    printf("height (cm) >>");
    scanf("%f", &height);

    height /= 100;   //cm => m

    bmi = weight / pow(height, 2); //

    printf("\nBMI: %g", bmi);
    
    if (bmi >= 30) {
        strcpy(shape, "obese");
    } else if (bmi >= 25) {
        strcpy(shape, "over weight");
    } else if (bmi >= 18.5) {
        strcpy(shape, "normal weight");
    } else if (bmi < 18.5) {
        strcpy(shape, "under weight");
    }

    printf("\nshape: %s \n", shape);

}
