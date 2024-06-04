#include <stdio.h>
#include <stdbool.h>
#include <math.h>

void main() {
   int h, m, s;

    printf("\nenter hour minute second for time#1");
    printf("\n(example: 20 45 39) >>");
    scanf("%d%d%d", &h, &m, &s);    
    int t1_sec = (3600 * h) + (60 * m) + s;

    printf("\nenter hour minute second for time#2");
    printf("\n(example: 20 45 39) >>");
    scanf("%d%d%d", &h, &m, &s);  
    int t2_sec = (3600 * h) + (60 * m) + s;

    int time_dif_sec = abs(t2_sec - t1_sec);

    h = time_dif_sec / 3600;

    int remaining = time_dif_sec % 3600;
    m = remaining / 60;

    s = remaining % 60;

    printf("\ndifferent time");
    (h > 0) ? printf("\n%d hour(s)", h) : printf("");
    (m > 0) ? printf("\n%d minute(s)", m) : printf("");
    (s > 0) ? printf("\n%d second(s)", s) : printf("");

    putchar('\n');
}
