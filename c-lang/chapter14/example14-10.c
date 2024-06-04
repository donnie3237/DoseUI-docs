#define _POSIX_C_SOURCE 200809L
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

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

	if ((fpt = fopen(path, "wb+")) == NULL) {
		printf("\nerror! can't open file\n");
		exit(0);        
	}
    
    struct employee emp[] = {
        {"Harry Potter", 40, "Manager", 80000},
        {"Tom Jerry", 35, "Programmer", 45000},
        {"Tony Stark", 44, "Engineer", 55000},
        {"James Bond", 38, "Human Resource", 30000},
        {"Snow White", 30, "Accountant", 35000},
        {"Alice Wonderland", 25, "Officer", 18000}
    };

    int num_pd = sizeof(emp) / sizeof(emp[0]);

    size_t size = sizeof(struct employee);

    for (int i = 0; i < num_pd; i++) {
        fwrite(&emp[i], size, 1, fpt);
    }
    
    rewind(fpt);
    struct employee em; 

    //แสดงผลในแบบตาราง
    printf(
        "\n%-20s\t%3s\t%-15s\t%10s\n%s%s",
        "name", "age", "position", "salary",
        "-----------------------------------",
        "-----------------------"
    );

    while (!feof(fpt)) {
        size_t result = fread(&em, size, 1, fpt);
        if (result == 0) {
            break;
        }

        printf(
             "\n%-20s\t%3d\t%-15s\t%'10d",
             em.name, em.age, em.position, em.salary
        );            
    }
    putchar('\n');

    fclose(fpt);
}