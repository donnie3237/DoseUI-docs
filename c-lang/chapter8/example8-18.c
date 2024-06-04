#include <stdio.h>

void main() {
    //psg = passenger
    const float MAX_LOAD = 600; //น้ำหนักรวมสูงสุด
    const int MAX_PSG = 8;      //จำนวนผู้โดยสารรวมสูงสุด
    
    float weight, total = 0;    //น.น.แต่ละคน และรวมทั้งหมด   
    int count_psg = 0;          //นับจำนวนผู้โดยสาร

    puts("\nto cancel, enter weight >>0\n");

    //เงื่อนไข น้ำหนักรวมและจำนวนผู้โดยสารทั้งหมด
    //ต้องไม่เกินค่าที่กำหนดไว้
    while (total < MAX_LOAD && 
           count_psg < MAX_PSG) {

        count_psg++;
        
        //รับค่าน้ำหนักของผู้โดยสารคนที่ ? (ตามลำดับของลูป)
        printf("passenger %d weight (kg) >>", count_psg);
        scanf("%f", &weight);

        if (weight < 0) {
            continue;
        } 
        //ถ้ารวมน้ำหนักผู้โดยสารคนล่าสุดแล้วเกินค่าที่กำหนด
        //ให้คนล่าสุดออกไป แล้วรับคนอื่นเข้ามาแทน
        //โดยไม่ต้องรวมข้อมูลของคนล่าสุด
        else if ((total + weight) > MAX_LOAD) {
            printf("overload! (%g kgs.)", total + weight);
            printf("\npassenger %d out\n", count_psg);

            count_psg--;
            continue;
        } else if (weight == 0) {
            count_psg--;
            break;
        }
        total += weight;
    }

    printf("\npassengers: %d", count_psg);
    printf("\nload: %g\n", total);
}