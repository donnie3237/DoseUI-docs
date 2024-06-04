
#include <stdio.h>

void main() {
    int h_goals, g_goals; //home, guest

    printf("\nhome goals >>");
    scanf("%d", &h_goals);

    printf("guest goals >>");
    scanf("%d", &g_goals);    

    if (h_goals > g_goals) {
        puts("\nhome team is the winner");
    } else if (h_goals < g_goals) {
        puts("\nguest team is the winner");
    } else {
        puts("\nboth teams play a draw");
    }
}

