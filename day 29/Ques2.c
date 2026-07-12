#include <stdio.h>

struct Item {
    int itemId;
    char itemName[50];
    int quantity;
    float price;
};

int main() {
    struct Item i;

    printf("Enter Item ID: ");
    scanf("%d", &i.itemId);

    printf("Enter Item Name: ");
    scanf("%s", i.itemName);

    printf("Enter Quantity: ");
    scanf("%d", &i.quantity);

    printf("Enter Price: ");
    scanf("%f", &i.price);

    printf("\n----- Inventory Details -----\n");
    printf("Item ID      : %d\n", i.itemId);
    printf("Item Name    : %s\n", i.itemName);
    printf("Quantity     : %d\n", i.quantity);
    printf("Price        : %.2f\n", i.price);
    printf("Total Value  : %.2f\n", i.quantity * i.price);

    return 0;
}