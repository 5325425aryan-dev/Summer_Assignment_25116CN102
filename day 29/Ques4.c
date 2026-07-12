#include <stdio.h>

int main() {
    int quantity;
    float price, total;

    printf("Enter Product Price: ");
    scanf("%f", &price);

    printf("Enter Quantity: ");
    scanf("%d", &quantity);

    total = price * quantity;

    if(total > 5000)
        total = total - (total * 0.10);

    printf("Final Amount = %.2f\n", total);

    return 0;
}