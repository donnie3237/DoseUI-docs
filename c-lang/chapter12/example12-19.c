
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

void main() {
    char *vocabs[] = {
        "anaconda", "snake", "cobra", "buffalo", "elephant", 
        "horse", "donkey", "monkey", "rhino", "alligator", "dinosaur", 
        "penguin", "peacock", "swift", "shark", "butterfly", "dragon",
        "salmon", "raptor", "parrot", "chicken", "swan", "mammoth", 
        "panther", "python", "tiger", "lion", "giraffe", "fish", "zebra"
    };
    int size = sizeof(vocabs) / sizeof(vocabs[0]);

    //สร้างเลขสุ่ม เพื่อนำไปเป็นลำดับ
    //ในการเลือกคำศัพท์ที่จะให้ทาย
    srand(time(0));
    rand();
    int r = rand() % size;

    char *g_vocab = vocabs[r];  //คำศัพท์ที่จะให้ทาย

    int len = strlen(g_vocab);

    char guessed[len];          
    //ใช้แทนตัวอักษรในที่ตำแหน่งที่ทายไปแล้ว
    //และที่ยังเหลือ เช่น *i*e*

    //เริ่มต้น ให้แทนทุกตัวอักษรในคำที่ให้ทาย
    //ด้วย * เช่น tiger => *****
    for (int i = 0; i < len; i++) {
        strcat(guessed, "*");
    }

    printf("\nvocab to guess %s\n", guessed);

    //ให้รับตัวอักษรจากผู้ใช้ ถ้ามีในคำที่ให้ทาย
    //ก็นำไปแทนที่ในตำแหน่งนั้น
    //และวนลูปไปเรื่อยๆ จนกว่าจะครบตัวอักษร
    char g_char;
    while (1) {
        printf("\nenter char >>");
        g_char = getchar();
        getchar();          //clear \n

        //วนลูปเพื่อตรวจสอบว่าตัวอักษรที่รับจากผู้ใช้
        //มีในคำที่ให้ทายหรือไม่ ถ้ามีแทนที่ลงในตำแหน่งนั้น
        for (int i = 0; i < len; i++) {
            if (g_vocab[i] == g_char) {
                guessed[i] = g_char;
            }
        }  

        //แสดงผลให้ใช้เห็นว่ามีตัวอักษรในตำแหน่งใดที่ทายถูกแล้ว
        //และยังเหลือในตำแหน่งใดอีก เช่น t*g**
        printf("%s\n", guessed);

        //ถ้าทายถูกครบทุกตัวอักษร ถือว่าเป็นผู้ชนะ
        //ให้ออกจากลูปเพื่อหยุดเกม
        if (strcmp(g_vocab, guessed) == 0) {
            break;
        }
    } 

    printf("\nyou win!\n");
}