#include <stdio.h>

struct Hotel {
    int roomNo;
    char customerName[50];
    int days;
    float rentPerDay;
};

int main() {
    struct Hotel h;
    float totalBill;

    printf("Enter Room Number: ");
    scanf("%d", &h.roomNo);

    printf("Enter Customer Name: ");
    scanf("%s", h.customerName);

    printf("Enter Number of Days: ");
    scanf("%d", &h.days);

    printf("Enter Rent Per Day: ");
    scanf("%f", &h.rentPerDay);

    totalBill = h.days * h.rentPerDay;

    printf("\n----- Hotel Bill -----\n");
    printf("Room Number : %d\n", h.roomNo);
    printf("Customer    : %s\n", h.customerName);
    printf("Days Stayed : %d\n", h.days);
    printf("Total Bill  : %.2f\n", totalBill);

    return 0;
}