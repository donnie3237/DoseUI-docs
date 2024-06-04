#include <stdio.h>

void main() {
    int n1, n2, n3, n4; 
    int sum = 0;            //เริ่มแรก ให้ผลรวมเป็น 0
    float average;    
 
    printf("\nvalue #1 >>");
    scanf("%d", &n1);
    sum += n1;

    printf("value #2 >>");
    scanf("%d", &n2);
    sum += n2;

    printf("value #3 >>");
    scanf("%d", &n3);
    sum += n3;

    printf("value #4 >>");
    scanf("%d", &n4);
    sum += n4;

    average = (float)sum / 4;

    printf("\nsum =  %d", sum);
    printf("\naverage = %g \n", average);
}