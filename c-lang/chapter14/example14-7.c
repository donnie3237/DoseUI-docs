#include <stdio.h>
#include <stdlib.h>

void main() {
	FILE *fpt;
	char *path = "files\\ex14-7.txt";

	if ((fpt = fopen(path, "w")) == NULL) {
		printf("\nerror! can't open file\n");
		exit(0);        
	}

	char name[100], email[150]; 

	printf("\nenter name email");
	printf("\ne.g. john john@test.info");
    printf("\npress <ctrl+z> to stop\n\n");

	//ให้ใช้ลูป while เพื่อรับค่าเข้ามาเรื่อยๆ
	//จนกว่าค่าที่รับเข้ามาจะเป็น <ctrl + z>
	//ซึ่งเทียบเท่ากับ eof นั่นเอง
    int n = 1;
    while(1) {
		printf("person #%d >>", n);
		scanf("%s%s", name, email);

		//ถ้าอินพุตเป็น <ctrl + z>
		//ให้หยุดรับข้อมูล
        if (feof(stdin)) {
            break;
        }
        
		if (n > 1 ) fputc('\n', fpt);

		//เขียนข้อมูลที่รับเข้ามาลงในไฟล์
		fputs(name, fpt);
		fputc(':', fpt);
		fputs(email, fpt);

        n++;
    }

	fclose(fpt);   
}
