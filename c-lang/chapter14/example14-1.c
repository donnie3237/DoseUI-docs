#include <stdio.h>
#include <stdlib.h>

void main() {
	FILE *fpt;
	char *path = "files\\ex14-1.txt";

	//ถึงแม้เราจะเปิดเพื่อเขียน ซึ่งหากไม่มีไฟล์อยูก่อน จะถูกสร้างใหม่
	//แต่บางกรณีอาจเกิดข้อผิดพลาด เช่น ชื่อไฟล์ซ้ำกับที่มีอยู่แล้ว
	//ดังนั้น ควรทำการตรวจสอบตามปกติก่อนใช้งาน
	if ((fpt = fopen(path, "w")) == NULL) {
		printf("\nerror! can't open file\n");
		exit(0);        
	}
	
	char *names[] = {
		"T-Shirt", "Polo", "Trousers", "Slacks", "Jeans"
	};

	float princes[] = {
		300, 250, 450, 500, 1000
	};

	char sizes[] = {
		'M', 'S', 'S', 'L', 'M'
	};

	fprintf(fpt, "name,price,size");

	for (int i = 0; i < 5; i++) {
		fprintf(fpt, 
			"\n%s,%g,%c", 
			names[i], princes[i], sizes[i]
		);
	}

	fclose(fpt);   
}
