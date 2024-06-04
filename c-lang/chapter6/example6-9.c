#include <stdio.h>

void main() {
    int score;
    char grade;

    printf("\nenter score (0 - 100) >>");
    scanf("%d", &score);

    if (score >= 80){
        grade = 'A';
    } else if (score >= 70){
        grade = 'B';
    } else if (score >=60){
        grade = 'C';
    } else if (score >= 50){
        grade = 'D';
    } else {
        grade = 'F';
    }

    printf("\ngrade: %c \n", grade);

}