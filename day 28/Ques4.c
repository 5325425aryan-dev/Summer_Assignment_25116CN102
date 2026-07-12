#include <stdio.h>

struct Passenger {
    char name[50];
    int age;
    int seatNo;
};

int main() {
    struct Passenger p;

    printf("Enter Passenger Name: ");
    scanf("%s", p.name);

    printf("Enter Age: ");
    scanf("%d", &p.age);

    printf("Enter Seat Number: ");
    scanf("%d", &p.seatNo);

    printf("\n----- Reservation Details -----\n");
    printf("Passenger Name : %s\n", p.name);
    printf("Age            : %d\n", p.age);
    printf("Seat Number    : %d\n", p.seatNo);
    printf("Reservation Confirmed!\n");

    return 0;
}