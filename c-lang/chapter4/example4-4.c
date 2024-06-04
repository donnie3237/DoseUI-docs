#include <stdio.h>
#include <string.h>

void main() {
    char str[100] = "Happy ";


    strcat(str, "New Year");
    puts(str);  //Happy New Year

    strcpy(str, "Happy ");
    strcat(str, "Birthday");
    puts(str);  //Happy Birthday
}