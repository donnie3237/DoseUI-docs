#include <stdio.h>

//prototype
char check_grade(int score);

//สตรักเจอร์ข้อมูลนักเรียน
struct student {
    int id;
    char name[30];
    int math, sci, eng; //คะแนนในบางวิชา
} std[] = {};

void main() {  

    printf(
        "\nenter name math sci eng score\n%s",
        "e.g >>John 75 69 88\n\n"
    );

    struct student s;

    //วนลูปเพื่อรับข้อมูลไปเรื่อยๆ จนกว่าจะกด <ctrl+z>
    int i = 0;
    while (1) {
        printf("student #%d data >>", (i + 1));
        
        scanf(
            "%s%d%d%d", 
            std[i].name, 
            &std[i].math, 
            &std[i].sci, 
            &std[i].eng
        );

        if (feof(stdin)) {  //ถ้ากด <ctrl+z>
            break;
        }

        //ค่า id ให้ใช้ลำดับของลูป เพื่อลดความยุ่งยาก
        std[i].id = i + 1;
        
        i++;
    }

    i = 0;
    while (1) {
        s = std[i];

        if (s.id == 0) {
            break;
        }

        printf(
            "\nid: %d -- name: %s -- ",
            s.id, s.name
        );

        //นอกจากการแสดงตัวเลขคะแนนแต่ละวิชาแล้ว
        //เรายังต้องส่งคะแนนไปยังฟังก์ชันที่ใช้ตรวจสอบเกรด
        //เพื่อนำกลับมาแสดงผลอีกด้วย
        printf(
            "math: %d(%c) -- sci: %d(%c) -- eng: %d(%c)",
            s.math, check_grade(s.math),
            s.sci, check_grade(s.sci),
            s.eng, check_grade(s.eng)
        );

        i++;
    }

    putchar('\n');
}

//ฟังก์ชันสำหรับตรวจสอบว่า
//ระดับคะแนนที่รับเข้ามาทางพารามิเตอร์
//ควรจะได้เกรดอะไร
char check_grade(int score) {
    char g;
    if (score >= 80) g = 'A';
    else if (score >= 70) g = 'B';
    else if (score >= 60) g = 'C';
    else if (score >= 50) g = 'D';
    else if (score >= 1) g = 'F';
    else g = '?';

    return g;
}