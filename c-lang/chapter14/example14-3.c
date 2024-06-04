#include <stdio.h>
#include <stdlib.h>

void main() {
	FILE *fpt;
	char *path = "files\\ex14-3.txt";

	if ((fpt = fopen(path, "w")) == NULL) {
		printf("\nerror! no such file or dir\n");
		exit(0);        
	}

	fputs("one\ntwo\nthree\nfour", fpt);
	fclose(fpt);	//ต้องปิดไฟล์ก่อนจะเปิดในโหมดอื่น

	fpt = fopen(path, "a");
	fputs("\nfive", fpt);
	fclose(fpt);

	fpt = fopen(path, "r+");
	fputs("six", fpt);
	fclose(fpt);  
}
