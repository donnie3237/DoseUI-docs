#include <stdio.h>

void main() {
    float w, h, ratio, dw, dh, z;

    printf("\nimage widht >>");
    scanf("%f", &w);

    printf("image height >>");
    scanf("%f", &h);

    printf("zoom level (%%) >>");
    scanf("%f", &z);

    //อัตราส่วนของการเปลี่ยนแปลง
    ratio = (100 - z) / 100;    

    dw = w * ratio;	    //ความกว้างที่เปลี่ยนแปลง
    dh = h * ratio;		//ความสูงที่เปลี่ยนแปลง
    w -= dw;			//ความกว้างหลังการเปลี่ยนขนาด
    h -= dh;			//ความสูงหลังการเปลี่ยนขนาด

    printf(
        "\nnew width: %g, new height: %g\n", 
        w, h
    );
}
