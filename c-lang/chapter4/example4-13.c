#include <stdio.h>

void main() {
    char name[30], age[3], from[200];

    printf("\nWhat's your name >>");
    gets(name);

    printf("Where are you come from >>");
    gets(from);

    printf("How old are you >>");
    gets(age);
    
    puts("-------------------------");
    puts("Your Information:");

    printf("\nName: %s \nAge: %s \nFrom: %s\n",
            name, age, from);
}