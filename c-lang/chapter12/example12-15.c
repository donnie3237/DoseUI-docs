#include <stdio.h>
#include <stdlib.h>

void main() {
    char *month_names[] = {
        [1]="January", "February", "March", "April",
        "May", "June", "July", "August",
        "September", "October", "November", "December"
    };  

    char imp_days[][3][50] = {
        //วันที่, เดือน, ชื่อวันสำคัญ
        {"1", "1", "New Year Day"},
        {"14", "2", "Valentine's Day"},
        {"14", "3", "Pi Day"},
        {"1", "4", "April Fool's Day"},
        {"1", "5", "Labour Day"},
        {"31", "10", "Halloween Day"},
        {"25", "12", "Christmas Day"},
        {"31", "12", "New Year's Eve"}
    };

    int size = sizeof(imp_days) / sizeof(imp_days[0]);

    char *day, *month, *imp_dayname;
    int m;

    for (int i = 0; i < size; i++) {
        day = imp_days[i][0];
        //วันที่ เราแค่แสดงผล จึงไม่จำเป็นต้องแปลงเป็นตัวเลข

        m = atoi(imp_days[i][1]);
        //เดือน เราต้องใช้เป็นเลขลำดับเพื่ออ่านชื่อเดือนจากอาร์เรย์
        //จึงต้องแปลงจากสตริงเป็นตัวเลข

        month = month_names[m];
        imp_dayname = imp_days[i][2];

        printf("\n%s %s: %s", day, month, imp_dayname);
    }

    putchar('\n');
}