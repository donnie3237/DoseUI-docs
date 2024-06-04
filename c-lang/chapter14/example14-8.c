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

	if ((fpt = fopen(path, "wb")) == NULL) {
		printf("\nerror! can't open file\n");
		exit(0);        
	}

    struct product pd[] = {
        {"jean", 1000, 10},
        {"shirt", 345, 5},
        {"jacket", 555.50, 8},
        {"slakcs", 456, 7},
        {"trousers", 499, 0}
    };

    int num_pd = sizeof(pd) / sizeof(pd[0]);

    //ขนาดของสตรักเจอร์ (เรคคอร์ด)
    size_t size = sizeof(struct product);

    for (int i = 0; i < num_pd; i++) {
        fwrite(&pd[i], size, 1, fpt);
    }
    
    fclose(fpt);
}