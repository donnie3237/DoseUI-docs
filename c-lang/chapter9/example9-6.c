#include <stdio.h>

float circle_area(float radius);
float circle_circumference(float radius);
float cyliner_surface(float radius, float height);
float cylinder_volume(float radius, float height);
float pi = 3.141;

void main() {
    float radius, height;
    printf("\nradius of cylinder >>");
    scanf("%f", &radius);

    printf("height of cylinder >>");
    scanf("%f", &height);

    float sf = cyliner_surface(radius, height);
    float vol = cylinder_volume(radius, height);

    printf("\ncylinder surface: %g", sf);
    printf("\ncylinder volume: %g\n", vol);
}

float circle_area(float radius) {
    return pi * (radius * radius);
}

float circle_circumference(float radius) {
    return 2 * pi * radius;
}

float cyliner_surface(float radius, float height) {
    //= side surface + top surface + bottom surface
    //= (circie_circumference * height) + (2 * circle_area)
    float side_sf = circle_area(radius) * height;
    float top_btm_sf = 2 * circle_area(radius);
    return side_sf + top_btm_sf;
}

float cylinder_volume(float radius, float height) {
    //= bottom area * height
    //= circle_area() * height
    return circle_area(radius) * height;
}