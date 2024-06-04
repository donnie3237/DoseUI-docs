#include <stdio.h>

void main() {
    char str1[15] = "1234567890123"; 
    char str2[] = "1234567890";    
    char str3[] = "1234578";      

    printf("str1 ==> ");
    printf("%s" ,str1);
    putchar('\n');

    printf("str2 ==> ");
    printf("%s" ,str2);
    putchar('\n');

    printf("str3 ==> ");
    printf("%s" ,str3);
    putchar('\n');
}