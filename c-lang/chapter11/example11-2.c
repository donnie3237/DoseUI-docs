#define _POSIX_C_SOURCE 200809L
#include <locale.h>
#include <stdio.h>

float *balance() {
    static float b;
    return &b;
}

void deposit(float amount) {
    printf("\ndeposit: %'g", amount);
    if (amount > 0) {
        float *b = balance();
        *b += amount;
        printf("\nbalance: %'g\n", *b);
    }
}

void withdraw(float amount) {
    float *b = balance();    
    printf("\nwithdraw: %'g", amount);
    if (amount > 0 && amount < *b) {
        *b -= amount;
        printf("\nbalance: %'g\n", *b); 
    } else {
        printf("\ninsufficient balance!\n");
    }
}

void main() {
    setlocale(LC_ALL, "");
    deposit(1000);
    deposit(500);
    withdraw(800);
    withdraw(1000);
    deposit(1200);
    withdraw(900);
    
    putchar('\n');
}