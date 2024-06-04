#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

void main() {
    int count_vowels = 0;
    char c;

    printf("\nenter 0 to stop\n");

    do {
        printf("enter char >>");
        c = getchar();

        getchar();  //clear \n

        if (c == '0') {
            break;
        }

        c = tolower(c); //แปลงเป็นตัวพิมพ์เล็ก

        if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u') {
            count_vowels++;
        }

    } while (true);

    printf("\nvowel letters: %d\n", count_vowels);
}