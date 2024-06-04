#include <stdio.h>
#include <math.h>

void main() {
    struct point {
        float x, y;
    }
    p = {6, 6},     
    q = {9, 10};     

    float dx = q.x - p.x;
    float dy = q.y - p.y;

    float distance = sqrt(pow(dx, 2) + pow(dy, 2));

    printf(
        "\ndistance between (%g, %g) and (%g, %g) is %g\n",
        p.x, p.y, q.x, q.y, distance
    );
}