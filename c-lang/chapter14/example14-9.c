#include <stdio.h>
#include <stdlib.h>

struct product {
    char name[30];
    float price;
    int remaining;
};

void main() {
	FILE *fpt;
	char *path = "files\\ex14-8.dat";

	if ((fpt = fopen(path, "rb")) == NULL) {
		printf("\nerror! no such file or dir\n");
		exit(0);        
	}

    size_t size = sizeof(struct product);
    struct product pd; 
    
    while (!feof(fpt)) {
        size_t result = fread(&pd, size, 1, fpt);
        if (result == 0) {
            break;
        }

        printf(
            "\nname: %s -- price: %g -- remaining: %d",
            pd.name, pd.price, pd.remaining
        );            
    }
    
    putchar('\n');
    fclose(fpt);
}