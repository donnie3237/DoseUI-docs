#include <stdio.h>
#include <stdlib.h>

#define NOFILE "can't open file"; exit(0)

//prototype
char check_grade(int score);

struct student {
    int id;
    char name[30];
    int math, sci, eng;
};

void main() {  
    FILE *fpt;
    fpt = fopen("files\\ex16-5.dat", "rb");
    if (fpt == NULL) {
        NOFILE;
    }  

    struct student std;
    size_t size = sizeof(struct student);

    //แสดงส่วนหัวของตาราง
    printf(
        "\n%4s\t%-15s\t%10s\t%4s\t%10s\t%4s\t%10s\t%4s\n%s%s%s",
        "id", "name", "math", "grade", 
        "science", "grade", "english", "grade",
        "-------------------------------",
        "-------------------------------",
        "--------------------------------"
    );

    //แสดงส่วนข้อมูลของตาราง
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
    }

    putchar('\n');
    fclose(fpt);
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