#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    
    int product = a * b;
    printf("The product of %d and %d is %d\n", a, b, product);
    
    return 0;
}