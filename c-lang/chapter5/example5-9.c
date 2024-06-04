#include <stdio.h>
#include <math.h>

void main() {
    printf("\n%g", ceil(5.55));		//6
    printf("\n%g", floor(1.23));	//1
    printf("\n%g", sqrt(100));		//10

    int radius = 10;
    float area = 3.141 * pow(radius, 2);
    printf("\narea = %g", area);	    //314.1
  
}