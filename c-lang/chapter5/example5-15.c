#include <stdio.h>
#include <math.h>

void main() {
    int n;
    float s, a;

    //จำนวนด้านของรูปหลายเหลี่ยม
    printf("\nnumber of sides >>");
    scanf("%d", &n);

    //ความยาวของแต่ละด้าน
    printf("length of each side >>");
    scanf("%f", &s);

    a = (n * pow(s, 2)) / (4 * tan(3.14/n));

    printf("\npolygon area = %0.2f \n", a);
}