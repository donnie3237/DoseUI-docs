#include <stdio.h>

void main() {
	float n1, n2, r;
	char op, buffer;

    printf("\nenter num1 operator num2");
    printf("\nexample: 10 + 5 >>");
	scanf("%f%c%c%f", &n1, &buffer, &op, &n2);

	switch (op) {
		case '+':
			r = n1 + n2; break;
		case '-':
			r = n1 - n2; break;
		case '*':
			r = n1 * n2; break;
    	case '/':
        	r = n1 /n2; break;
    	case '%':
        	r = (int)n1 % (int)n2; break;
	}
	
	printf("\n%g %c %g = %g \n", n1, op, n2, r);
}