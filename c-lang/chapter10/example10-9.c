#include <stdio.h>

void main() {
	//อาร์เรย์สำหรับเก็บชื่อของ 3 ทวีป
    //โดยชื่อแต่ละทวีปยาวไม่เกิน 20 อักขระ
    char continents[3][20] = {
        "Asia", "Europe", "North America"
    };

	//อาร์เรย์สำหรับข้อมูลของ 3 ทวีป
	//แต่ละทวีปมีไม่เกิน 4 ประเทศ
	//ชื่อแต่ละประเทศยาวไม่เกิน 30 อักขระ
	//ต้องวางอาร์เรย์ที่เก็บชื่อประเทศ
	//ให้ตรงกับลำดับทวีปในอาร์เรย์อันแรก
    char countries[3][4][30] = {
        {"Thailand", "Japan", "India", "Qatar"},
        {"UK", "France", "Germany", "Italy"},
        {"USA", "Canada", "Mexico"}
    };

    //แสดงผลโดยลูปชั้นนอกวนตามจำนวนทวีป
    for (int i = 0; i < 3; i++) {
        //แสดงชื่อทวีป
        printf("\n%s: ", continents[i]);

        //ลูปชั้นในแสดงชื่อแต่ละประเทศในทวีปนั้นๆ
        for (int j = 0; j < 4; j++) {
            (j > 0) ? printf(", ") : printf("");
            printf("%s", countries[i][j]);
        }
    }

    putchar('\n');
}