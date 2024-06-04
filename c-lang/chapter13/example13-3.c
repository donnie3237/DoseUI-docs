#include <stdio.h>
#include <math.h>

void main() {
    const int size = 4;

    struct point { 
        float x, y; 
    } 
    p[] = {
        {0, 0}, {3, 4}, {10, 15}, {13, 6}
    };

    float dx, dy, pm = 0;

    for (int i = 0; i < size; i++) {
        //ถ้าไม่ใช่จุดสุดท้าย 
        //ให้คิดระยะระหว่างจุดนั้นกับจุดถัดไป
        if (i < (size - 1)) {
            dx = p[i].x - p[i+1].x;
            dy = p[i].y - p[i+1].y;
        } 
        //ถ้าเป็นจุดสุดท้าย 
        //ให้คิดระยะระหว่างจุดนั้นกับจุดแรก        
        else {
            dx = p[i].x - p[0].x;
            dy = p[i].y - p[0].y;            
        }

        pm += sqrt((dx * dx) + (dy * dy));
        //pm += sqrt(pow(dx, 2) + pow(dy, 2));
    } 

    printf("\nperimeter = %g\n", pm);
}