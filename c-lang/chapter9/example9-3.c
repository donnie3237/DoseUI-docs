#include <stdio.h>

void say_hello();
void say_sawasdee();
void say_goodbye();

void main() {
    putchar('\n');
    say_hello();	
}

void say_hello() {
    puts("hello");
    say_sawasdee();
}

void say_sawasdee() {
 	puts("sawasdee");
    say_goodbye();
}

void say_goodbye() {
    puts("goodbye");
}
