#include <stdio.h>
#include <stdlib.h>

void main() {
	FILE *fpt;
	char *path = "files\\ex14-1.txt";

	if ((fpt = fopen(path, "r")) == NULL) {
		puts("\nerror! no such file\n");
		exit(0);
	}

	char c;
	int num_lines = 0, num_chars = 0;

	while ((c = fgetc(fpt))) {
		if (c == '\n') {
			num_lines++;
		} else if (c == EOF) {
			num_lines++;
			break;
		} else {
			num_chars++;            
		}
	}   

	printf(
		"\nlines: %d\nchars: %d\n", 
		num_lines, num_chars
	);
}
