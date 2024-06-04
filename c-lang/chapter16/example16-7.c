#include <stdio.h>
#include <stdlib.h>

#define NOFILE "can't open file"; exit(0)

FILE *fpt;
const char *path = "files\\ex16-7.dat";

//prototypes
char check_grade(int score);
void show_menu();
void show_data(int id);
void add_new();

struct student {
    int id;
    char name[30];
    int math, sci, eng;
} std;

void main() {  
    fpt = fopen(path, "ab+");
    if (fpt == NULL) {
        NOFILE;
    } 

    show_menu();
}

//ฟังก์ชันสำหรับเลือกเมนู
void show_menu() {
    int m;
    printf(
        "\n%s\n%s\n%s",
        "1) show all\t2) show by id",
        "3) add new\totherwise exit",
        "select >>"
    );
    scanf("%d", &m);

    if (m == 1) {
        show_data(0);
    } else if (m == 2) {
        //ถ้าเลือกแสดงผลตามค่า id
        //ให้รับค่า id ทางคีย์บอร์ด
        int id;
        printf("enter id >>");
        scanf("%d", &id);
        show_data(id);
    } else if (m == 3) {
        add_new();
    } else {
        fclose(fpt);
        exit(0);
    }
}

//ฟังก์ชันแสดงข้อมูล โดยรับค่าพารามิเตอร์เป็นค่า id
//ถ้าค่า id เป็น 0 แสดงทั้งหมด 
//มิฉะนั้น แสดงข้อมูลของเรคคอร์ดที่มีค่าตามที่ระบุ
void show_data(int id) {
    size_t size = sizeof(struct student);

    //ส่วนหัวตาราง
    printf(
        "\n%4s\t%-15s\t%10s\t%4s\t%10s\t%4s\t%10s\t%4s\n%s%s",
        "id", "name", "math", "grade", "science", "grade", "english", "grade",
        "-----------------------------------------------",
        "-----------------------------------------------"
    );

    //ถ้า id = 0 คือแสดงทุกเรคคอร์ด 
    //ให้เลื่อนพอยเตอร์ไปจุดเริ่มต้นของไฟล์
    if (id == 0) {
        rewind(fpt);
    } 
    
    //ถ้าระบุค่า id (รับเข้ามาทางพารามิเตอร์)
    //ให้เลื่อนพอยเตอร์ไปจุดเริ่มต้นของเรคคอร์ดนั้น
    else {
        fseek(fpt, (id-1) * size, SEEK_SET);        
    }

    //อ่านข้อมูลไปแสดงผล
    while (!feof(fpt)) {
        size_t result = fread(&std, size, 1, fpt);
        if (result == 0) {
            break;
        }

        printf(
             "\n%4d\t%-15s\t%10d\t%4c\t%10d\t%4c\t%10d\t%4c",
             std.id,
             std.name, 
             std.math, check_grade(std.math),
             std.sci, check_grade(std.sci),
             std.eng, check_grade(std.eng)
        );  

        //ถ้าระบุค่า id เป็นการแสดงเพียงเรคคอร์ดเดียว
        //ก็ออกจากลูป เพื่อไม่ต้องแสดงเรคคอร์ดต่อไปอีก
        if (id != 0) {
            break;
        }          
    }

    putchar('\n');

    show_menu();
}

//ฟังก์ชันสำหรับเพิ่มข้อมูลใหม่
void add_new() {
    size_t size = sizeof(struct student);
    int max_id;

    //เริ่มจากการตรวจสอบค่า id ของเรคคอร์ดสุดท้าย
    //เพื่อนำไปกำหนดเป็น id ของเรคคอร์ดที่จะเพิ่มใหม่
    rewind(fpt);
    while (!feof(fpt)) {
        size_t result = fread(&std, size, 1, fpt);
        if (result == 0) {
            break;
        }
        max_id = std.id;
    }

    //รับค่าทั้งชื่อและนามสกุล
    char fname[10], lname[10];
    printf(
        "\nenter firstname lastname math sci eng score\n%s",
        "e.g >>Tom Jerry 75 69 88\n\n"
    );
    
    printf("student #%d data >>", (max_id + 1));
    scanf(
        "%s%s%d%d%d", 
        fname, lname,
        &std.math, 
        &std.sci, 
        &std.eng
    );

    //นำชื่อและนามสกุลมาเชื่อมต่อเป็นค่าเดียวกัน
    sprintf(std.name, "%s %s", fname, lname);

    //เพิ่มค่า id ของเรคคอร์ดสุดท้ายที่ได้มา
    //เพื่อเป็น id ของเรคคอร์ดใหม่
    std.id = max_id + 1;

    //เลื่อนพอยเตอร์ไปยังท้ายไฟล์ เพื่อเขียนต่อท้ายข้อมูลเดิม
    fseek(fpt, 0, SEEK_END);

    //เขียนข้อมูลลงในไฟล์
    fwrite(&std, size, 1, fpt);

    show_menu();
}

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