#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float m1, m2, m3, total, percentage;
};

int main() {
    struct Student s;

    printf("Enter Roll Number: ");
    scanf("%d", &s.roll);

    printf("Enter Name: ");
    scanf("%s", s.name);

    printf("Enter Marks in 3 Subjects: ");
    scanf("%f %f %f", &s.m1, &s.m2, &s.m3);

    s.total = s.m1 + s.m2 + s.m3;
    s.percentage = s.total / 3;

    printf("\n----- Result -----\n");
    printf("Roll No      : %d\n", s.roll);
    printf("Name         : %s\n", s.name);
    printf("Total Marks  : %.2f\n", s.total);
    printf("Percentage   : %.2f%%\n", s.percentage);

    if(s.percentage >= 40)
        printf("Result : PASS\n");
    else
        printf("Result : FAIL\n");

    return 0;
}