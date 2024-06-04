#include <stdio.h>

void main() {
    char name[30], from[100];
    int age;

    printf("\nWhat's your name >>");
    scanf("%[^\n]", name);
    getchar();      //clear \n

    printf("Where are you come from >>");
    scanf("%[^\n]", from);
    getchar();     //clear \n

    printf("How old are you >>");
    scanf("%d", &age); 
    
    puts("-------------------------");
    puts("Your Information:");

    printf("\nName: %s \nFrom: %s \nAge: %d \n",
            name, from, age);
}