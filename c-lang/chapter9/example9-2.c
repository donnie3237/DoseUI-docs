#include <stdio.h>

void say_hello();
void say_anything(char msg[100]);

void main() {
    say_anything("hi");	
    say_hello();	
}

void say_hello() {
    puts("hello");
}

void say_anything(char msg[100]) {
 	puts(msg);
}
