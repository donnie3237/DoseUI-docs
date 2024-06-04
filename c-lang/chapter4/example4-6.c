
#include <stdio.h>

void main() {
    printf("\nThe lucky number is %d", 13);
    printf("\nPI (f) = %f", 3.1415956789);     
    printf("\nPI (0.2f) = %0.2f", 3.141);
    printf("\nPI (g) = %g", 3.141);

    printf("\nHi, I'm %s %s, creator of %c language", 
            "Dennis", "Ritchie", 'C');

    printf("\nKhun %s please contact counter number %d", 
            "Banchar", 5);

    char word[100] = "\nHappy %s";
    char ny[] = "New Year";
    char bd[] = "Birthday\n";
    printf(word, ny);
    printf(word, bd);
}