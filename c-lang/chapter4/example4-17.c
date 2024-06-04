#include <stdio.h>
#include <stdlib.h>

void main() {
    char one23[] = "123";
    char ff_point_ss[] = "45.67";
    char storage[] = "256GB";
    char tem[] = "-110.75celsius";
    char float_num[20];
    
    int a = atoi(one23);
    float b = atof(ff_point_ss);
    int c = atoi(storage);
    float d = atof(tem);

    printf("\n\"%s\" + 1 = %d \n", one23, a + 1);
    printf("\"%s\" - 1 = %0.2f \n", ff_point_ss, b - 1);
    printf("\"%s\" + 64 = %d \n", storage, c + 64);
    printf("\"%s\" - 100 = %0.2f \n", tem, d - 100);

    printf("\nEnter float number >>");
    gets(float_num);
    float e = atof(float_num);
    printf("\"%s\" + 0.5 = %0.2f \n", float_num, e + 0.5);
}