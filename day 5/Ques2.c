#include <stdio.h>

int factorial(int n) {
    int fact = 1;
    for(int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

int main() {
    int n, temp, sum = 0;

    scanf("%d", &n);

    temp = n;

    while(temp != 0) {
        sum += factorial(temp % 10);
        temp /= 10;
    }

    if(sum == n)
        printf("Strong Number");
    else
        printf("Not Strong Number");

    return 0;
}