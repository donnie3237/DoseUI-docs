#include <stdio.h>

void say_hello() {
    puts("hello");
}

void say_anything(char msg[100]) {
 	puts(msg);
}

void main() {
    say_hello();	
    say_anything("Hi");		
}

