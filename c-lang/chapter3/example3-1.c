#include <stdio.h>

#define PI 3.14159
#define LUCKY_NUMBER 13
#define LETTER 'C'
#define PROGRAM_NAME "Business Management"
#define VERSION "1.0.1"

int dose(int num){
    int fff = (num + 30)*2 ;
    return fff;
}

void main() {
    int gg = dose(10);
   printf("%d\n", gg);
};