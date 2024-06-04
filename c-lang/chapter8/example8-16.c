#include <stdio.h>
#include <stdbool.h>

void main() {
   int h, m, s;

    printf("\nenter hour minute second");
    printf("\n(example: 20 45 39) >>");
    scanf("%d%d%d", &h, &m, &s);

    //ชั่วโมง ต้องอยู่ระหว่าง 0 - 23
    //นาทีและวินาที ต้องอยู่ระหว่าง 0 - 59
    bool valid_h = (h >= 0 && h <= 23);
    bool valid_m = (m >= 0 && m <= 59);
    bool valid_s = (s >= 0 && s <= 59);

    //ถ้าค่าทั้งหมดอยู่ในช่วงที่เป็นไปได้
    if (valid_h && valid_m && valid_s) {
        //จัดรูปแบบโดยหากเป็นเลขหลักเดียว ให้เติม 0 ข้างหน้า
        printf("\ntime is %02d:%02d:%02d \n", h, m, s);
    } else {
        puts("\ninvalid time");
    }
}
