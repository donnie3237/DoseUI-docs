#include <stdio.h>

void main() {
    char    firstname[] = "Elon", lastname[] = "Musk",
            adress1[] = "Palo Alto California",
            address2[] = "United States of America",
            email[] = "elon_musk@example.com", 
	        career[] = "Tesla & SpaceX CEO";

    printf("\nName: ");
    printf("%s" ,firstname);
    printf(" ");
    printf("%s" ,lastname);
    putchar('\n');

    printf("Career: ");
    printf("%s" ,career);
    putchar('\n');
}