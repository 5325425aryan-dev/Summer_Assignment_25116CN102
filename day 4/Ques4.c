#include <stdio.h>
#include <math.h>

int main() {
    int start, end;

    scanf("%d %d", &start, &end);

    for(int n = start; n <= end; n++) {
        int temp = n, digits = 0, sum = 0;

        while(temp != 0) {
            digits++;
            temp /= 10;
        }

        temp = n;

        while(temp != 0) {
            sum += pow(temp % 10, digits);
            temp /= 10;
        }

        if(sum == n)
            printf("%d ", n);
    }

    return 0;
}