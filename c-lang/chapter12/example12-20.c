
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

    srand(time(0));
    rand();
    int r = rand() % size;

    char *g_vocab = vocabs[r];
    int len = strlen(g_vocab);
    char guessed[len];

    for (int i = 0; i < len; i++) {
        strcat(guessed, "*");
    }

    //ทายได้สูงสุดไม่เกิน 2 เท่าของจำนวตัวอักษรในคำที่ให้ทาย
    int max_guess = 2 * len, count_guess = 1;
    char g_char;

    printf("\nvocab to guess %s", guessed);
    printf("\nmax guess: %d times\n", max_guess);

    while (1) {
        printf("\nguess #%d", count_guess);
        printf("\nenter char >>");
        g_char = getchar();
        getchar();     //clear \n

        for (int i = 0; i < len; i++) {
            if (g_vocab[i] == g_char) {
                guessed[i] = g_char;
            }
        }  
        printf("%s\n", guessed);

        //ถ้าทายถูกครบทุกตัวอักษร
        if (strcmp(g_vocab, guessed) == 0) {
            break;
        
        //ถ้าทายครบจำนวนครั้งที่กำหนดเอาไว้
        //แต่ยังไม่ครบทุกตัวอักษร ให้ถือว่าแพ้ และหยุดทำงาน
        } else if (count_guess == max_guess) {
            printf(
                "\ngame over! you guessed more than %d times\n", 
                max_guess
            );
            exit(0);
            //break;
        }

        //นับจำนวนครั้งที่ทายเพิ่มขึ้นเรื่อยๆ 
        count_guess++;
    } 

    printf("\nyou win!\n");
}