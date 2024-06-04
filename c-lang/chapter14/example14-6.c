#include <stdio.h>
#include <stdlib.h>

void main() {
    FILE *fpt;
	char *path = "files\\ex14-6.txt";

	if ((fpt = fopen(path, "w+")) == NULL) {
		printf("\nerror! can't open file\n");
		exit(0);        
	}

	char p[][3][30] = {
		{"T-Shirt", "300", "M"},
        {"Polo", "250", "S"},
        {"Trousers", "450", "S"},
        {"Slacks", "500", "L"},
        {"Jeans", "1000", "M"}
	};

    int n = sizeof(p) / sizeof(p[0]);

	for (int i = 0; i < n; i++) {
		fprintf(fpt, "%s\t%s\t%s\n",
			p[i][0], p[i][1], p[i][2]
		);
	}

	//หลังการเขียนไฟล์ พอยเตอร์จะชี้ที่ท้ายไฟล์
	//หากเราต้องการอ่านข้อมูลทั้งหมด
	//ต้องเลื่อนพอยเตอร์กลับไปที่จุดเริ่มต้นของไฟล์
    rewind(fpt);

    char name[20], size;
    int price;
    
    while (!feof(fpt)) {
        fscanf(fpt, "%s\t%d\t%c\n", name, &price, &size); 
        printf(
            "\nname: %s \t price: %d \t size: %c", 
            name, price, size
        );
    }
    
    putchar('\n');
    fclose(fpt);
}