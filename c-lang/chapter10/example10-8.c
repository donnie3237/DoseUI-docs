#include <stdio.h>
#include <string.h>

void main() {
    char words[10][20] = {
        "zero", "one", "two", "three", "four", 
        "five", "six", "seven", "eight", "nine"
    };

    long num;
    char strnum[20], text[100];
    int d;

    printf("\nenter +int number >>");
    scanf("%ld", &num);

    sprintf(strnum, "%ld", num);

    for (int i = 0; i < strlen(strnum); i++) {
        d = strnum[i] - '0';         
        //แปลงจากอักขระตัวเลขไปเป็นตัวเลข
        //เพื่อใช้เป็นลำดับของอาร์เรย์

        strcat(text, words[d]);
        strcat(text, " ");
    }
    
    puts(text);
}