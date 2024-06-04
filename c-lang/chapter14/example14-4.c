#include <stdio.h>
#include <stdlib.h>

void main() {
	FILE *fpt;
	char *path = "files\\ex14-2.txt";

	if ((fpt = fopen(path, "r")) == NULL) {
		puts("\nerr! no such file or dir\n");
		exit(0);
	}

	//ถ้าต้องการอ่านทีละบรรทัด ให้กำหนดจำนวนอักขระสูงสุด
	//โดยคาดว่าให้เกินจำนวนอักขระที่มีในแต่ละบรรทัด
	//เพื่อให้เจอ \n ก่อนเงื่อนไขอื่น
	int max_len = 200;
	char lines[max_len + 1];

	putchar('\n');
	while (fgets(lines, max_len + 1, fpt) != NULL) {
		printf("%s", lines);
		//แต่ละบรรทัดที่อ่านได้จะรวม \n ต่อท้ายด้วย
		//ยกเว้น บรรทัดสุดท้ายอาจไม่มี (ขึ้นกับการเขียนไฟล์)

		//ถ้าจะตัด \n ท้ายบรทัดออกให้กำหนดโค้ดดังนี้
		//remove trailing newline
		/*
		last_char = strlen(lines) - 1;
		if (lines[last_char] == '\n') {
			lines[last_char] = '\0';
		}
		*/	
	}
	putchar('\n');

	fclose(fpt);
}
