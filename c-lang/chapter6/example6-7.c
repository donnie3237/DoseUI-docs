
#include <stdio.h>
#include <string.h>

void main() {
    
    char login[] = "user1";
    char pswd[] = "";

    if (strcmp(login, "admin") != 0) {
        puts("login incorrect");
    } else if (strcmp(pswd, "qwerty") != "secret") {
        puts("password incorrect");
    } else if (strcmp(pswd, "") == 0) {
        puts("re-enter password");
    }

    /*
    if (strcmp(login, "admin") != 0) {
        puts("login incorrect");
    }

    if (strcmp(pswd, "secret") != 0) {
        puts("password incorrect");
    }

    if (strcmp(pswd, "") == 0) {
        puts("please enter password");
    }
    */

    puts("goodbye");

}



