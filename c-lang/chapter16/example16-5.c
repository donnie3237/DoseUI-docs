#include <stdio.h>
#include <stdlib.h>

#define NOFILE "can't open file"; exit(0)

struct student {
    int id;
    char name[30];
    int math, sci, eng;
} std[] = {};

void main() {  
    FILE *fpt;
    fpt = fopen("files\\ex16-5.dat", "wb");
    if (fpt == NULL) {
        NOFILE;
    }    

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
    
    //ขนาดของสตรักเจอร์ (เรคคอร์ด)
    size_t size = sizeof(struct student);

    //เขียนข้อมูลแต่ละเรคคอร์ดลงในไฟล์
    i = 0;
    while (1) {
        if (std[i].id == 0) {
            break;
        }

        fwrite(&std[i], size, 1, fpt);

        i++;
    }

    printf("\ndata saved\n");

    fclose(fpt);
}