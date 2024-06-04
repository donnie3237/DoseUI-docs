#include <stdio.h>
#include <stdbool.h>

void main() {
    float n1, n2, r;
    char op;

    printf("\nenter num #1 >>");
    scanf("%f", &n1);
    getchar();

    printf("enter operator (+, -, * , /, %) >>");
    scanf("%c", &op);

    printf("enter num #2 >>");
    scanf("%f", &n2);

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