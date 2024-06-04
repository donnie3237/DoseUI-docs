#include <stdio.h>

void main() {
    int score = 0;
    float person = 0;
    short rate;

    putchar('\n');

    //วนลูปตามจำนวนผู้ให้ดาว (ในที่นี้คือ 5 คน)
    for (int i = 1; i <= 5; i++) {
        //คนที่ i ให้กี่ดาว? 
        printf("person #%d, num stars (1 - 5) >>", i);
        scanf("%d", &rate);
        
        //ถ้าให้ดาวเป็นเลขระหว่าง 1 - 5 (ถูกต้อง)
        //ก็เพิ่มคะแนนสะสม และเพิ่มจำนวนผู้ให้ดาว (ได้ถูกต้อง)
        if (rate >= 1  && rate <= 5) {
            score += rate;			
            person += 1;		
        }
    }

    float avg = 0;
    short stars = 0;

    if (score > 0) {
        avg = score / (person * 5); //ค่าเฉลี่ย
    }

    if (avg >= 0.8) {
        stars = 5;
    } else if (avg >= 0.6) {
        stars = 4;
    } else if (avg >= 0.4) {
        stars = 3;
    } else if (avg >= 0.2) {
        stars = 2;
    } else if (avg > 0) {
        stars = 1;
    }

    if (stars > 0){
        printf("\nrating: ");

        //แสดง * ตามจำนวนดาวที่ได้
        for (int i = 1; i <= stars; i++) {
            printf("*");
        }        
    } else {
        printf("\nno rating");
    }

    putchar('\n');
}
