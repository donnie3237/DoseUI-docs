
#include <stdio.h>
#include <stdlib.h>

void main() {
    int num_students = 6;
    int score[num_students];
    int max = 0;

    putchar('\n');

    for (int i = 0; i < num_students; i++) {
        printf("student #%d score >>", i + 1);
        scanf("%d", &score[i]);

        if (score[i] <= 0 || score[i] >= 100) {
            i--;
            continue;
        }
        
        if (score[i] > max) {
            max = score[i];
        }
    }

    int d;
    char g;

    for (int i = 0; i < num_students; i++) {
        d = max - score[i];
        if (d <= 10) g = 'A';
        else if (d <= 20) g = 'B';
        else if (d <= 30) g = 'C';
        else if (d <= 40) g = 'D';
        else g = 'F';

        printf("\nstudent #%d grade: %c", (i+1), g);
    }
    putchar('\n');
}