#include <stdio.h>

void main() {
    int mu, lp, cs, as, mc, sp;

    puts("\nExample: \nTeam A - Team B >>3 2");

    printf("\nManU - Liverpool >>");
    scanf("%d%d", &mu, &lp);

    printf("Chelsea - Arsenal >>");
    scanf("%d%d", &cs, &as);

    printf("ManCity - Spur >>");
    scanf("%d%d", &mc, &sp);

    puts("\n------------------\n");
    puts("Football Result:");
    printf("\nManU %d - %d Liverpool", mu, lp);
    printf("\nChelsea %d - %d Arsenal", cs, as);
    printf("\nManCity %d - %d Spur\n", mc, sp);
}