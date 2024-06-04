
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void main() {
    char chars[100] = "0123456789";
    strcat(chars, "abcdefghijklmnopqrstuvwxyz");
    strcat(chars, "ABCDEFGHIJKLMNOPQRSTUVWXYZ");

     srand(time(0));
     rand();
     
     int r = rand() % 62;  //จะได้เลข 0-61
     char c1 = chars[r];
     char c2 = chars[rand() % 62]; 
     char c3 = chars[rand() % 62];
     char c4 = chars[rand() % 62];
     char c5 = chars[rand() % 62];
     char c6 = chars[rand() % 62];
    
    printf(
        "\npassword: %c%c%c%c%c%c \n", 
        c1, c2, c3, c4, c5, c6
    );
}