#include <stdio.h>
#include <string.h>
#include <ctype.h>

void main() {
    putchar('\n');
    char s[20];

    strcpy(s, (isdigit('1')) ? "" : "not ");
    printf("1 is %sdigit\n", s);
    
    strcpy(s, (isdigit('x')) ? "" : "not ");
    printf("x is %sdigit\n", s);

    strcpy(s, (isalpha('a')) ? "" : "not ");
    printf("a is %salpha\n", s);

    strcpy(s, (isalpha('A')) ? "" : "not ");
    printf("A is %salpha\n", s);

    strcpy(s, (isupper('a')) ? "" : "not ");
    printf("a is %supper\n", s);

    strcpy(s, (isupper('A')) ? "" : "not ");
    printf("A is %supper\n", s);    

    char d;
    printf("\nenter digit (0-9) >>");
    scanf("%c", &d);
    if (!isdigit(d)) {
        printf("error! please enter 0-9\n");
    } else {
        printf("thank! for entering digit\n");
    }
}