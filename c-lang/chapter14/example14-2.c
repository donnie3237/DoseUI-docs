#include <stdio.h>
#include <stdlib.h>

void main() {
	FILE *fpt;
	char *path = "files\\ex14-2.txt";

	if ((fpt = fopen(path, "w")) == NULL) {
		printf("\nerror! can't open file\n");
		exit(0);        
	}

	char name[100], email[150]; 

	printf("\nenter name email");
	printf("\ne.g. john john@test.net\n\n");

	for (int i = 1; i <= 5 ; i++) {		
		printf("person #%d >>", i);
		scanf("%s%s", name, email);

		if (i > 1 ) fputc('\n', fpt);
		fputs(name, fpt);
		fputc(':', fpt);
		fputs(email, fpt);
        
	}

	fclose(fpt);   
}
