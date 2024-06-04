#define _POSIX_C_SOURCE 200809L
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>1

struct employee {
    char name[20];
    int age;
    char position[15];
    int salary;
};

void main() {
    setlocale(LC_ALL, "");
	FILE *fpt;
	char *path = "files\\ex14-10.dat";

	if ((fpt = fopen(path, "rb")) == NULL) {
		printf("\nerror! no such file or dir\n");
		exit(0);        
	}
    
    size_t size = sizeof(struct employee);
    struct employee em; 

    int r;
    printf("\nenter record order to read >>");
    scanf("%d", &r);

    fseek(fpt, (r-1) * size, SEEK_SET);

    size_t result = fread(&em, size, 1, fpt);
    if (result > 0) {
        printf(
            "\n%-20s\t%3s\t%-15s\t%10s\n%s%s",
            "name", "age", "position", "salary",
            "-----------------------------------",
            "-----------------------"
        );

        printf(
             "\n%-20s\t%3d\t%-15s\t%'10d\n",
             em.name, em.age, em.position, em.salary
        ); 
    }

    fclose(fpt);
}