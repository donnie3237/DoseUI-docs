#include <stdio.h>

void main() {
    char *daynames[7] = {
        "sunday", "monday", "tuesday", "wednesday",
        "thursday", "friday", "saturday"
    };

    char *colors[] = {
        "red", "yellow", "pink", "green",
        "orange", "blue", "purple"
    };
    
    int dayofweek;

    printf("\nenter day of week (1 - 7) >>");
    scanf("%d", &dayofweek);

    if (dayofweek >= 1 && dayofweek <= 7) {
        dayofweek -= 1;
        printf("\nday name: %s", daynames[dayofweek]);
        printf("\ncolor: %s\n", colors[dayofweek]);
    } else {
        puts("error!");
    }
}