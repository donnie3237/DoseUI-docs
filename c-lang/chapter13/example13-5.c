#include <stdio.h>

struct number {
    int intpart;        
    float fractpart;
};

struct number inc(struct number n) {
    n.intpart +=1;
    return n;
}

void dec(struct number *pt) {
    pt->intpart -= 1;
}

void main() {
    struct number num = {.intpart=10, .fractpart=0.50};
    printf(
        "\nthen: number = %g", 
        num.intpart + num.fractpart
    );

    struct number num2 = inc(num);
    printf(
        "\nafter call inc(): number = %g", 
        num2.intpart + num2.fractpart
    );

    dec(&num);
    printf(
        "\nafter call dec(): number = %g\n", 
        num.intpart + num.fractpart
    );
}