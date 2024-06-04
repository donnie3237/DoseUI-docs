#include <stdio.h>

void main() {
    const int size = 5;

    struct product {
        int id;
        char name[20];
        float price;
        int remaining;
    } pd[size];

    //รับข้อมูลสินค้าทางคีย์บอร์ด
    printf(
        "\nenter product data\n%s\n%s",
        "name price remaining",
        "e.g. jean 900 5\n\n"
    );

    for (int i = 0; i < size; i++) {
        pd[i].id = i + 1;
        printf("product #%d >>", pd[i].id);
        scanf(
            "%s %f %d", 
            pd[i].name, &pd[i].price, &pd[i].remaining
        );
    }

    //แสดงผลในแบบตาราง
    printf(
        "\n%3s\t%-15s\t\t%5s\t%10s\n%s",
        "id", "name", "price", "remaining",
        "---------------------------------------------------"
    );

    for (int i = 0; i < size; i++) {
        printf(
            "\n%3d\t%-15s\t\t%5g\t%10d",
            pd[i].id, pd[i].name, pd[i].price, pd[i].remaining
        );
    }

    putchar('\n');
}