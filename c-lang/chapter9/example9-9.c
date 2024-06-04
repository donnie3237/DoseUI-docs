#define _POSIX_C_SOURCE 200809L
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

short select_menu();
int get_amount(char msg[100]);
void deposit();
void withdraw();
void update_balance(int amount);

void main() {
    setlocale(LC_ALL, "");
    update_balance(0);
    select_menu();
}

short select_menu() {
    short m;
    printf("\n0: exit, 1: deposit, 2: withdraw");
    printf("\nselect menu no. >>");
    scanf("%hd", &m);

    if (m == 0) {
        exit(0);
    } else if (m == 1) {
        deposit();
    } else if (m == 2) {
        withdraw();
    } else {
        select_menu();
    }
}

void deposit() {
    int amount = get_amount("amount to deposit >>");
    update_balance(amount);
}

void withdraw() {
    int amount = get_amount("amount to withdraw >>");
    update_balance(-amount);  
}

int get_amount(char msg[100]) {
    int amount;
    printf(msg);
    scanf("%d", &amount);
    if (amount >= 0) {
        return amount;
    } else {
        get_amount(msg);
    }
}

void update_balance(int amount) {
    static int balance = 1000;
    if (amount < 0 && -amount > balance) {
        printf("\ninsufficent balance!\n");
    } else {
        balance += amount;
        printf("\nbalance = %'d\n", balance);
    }
    select_menu();
}