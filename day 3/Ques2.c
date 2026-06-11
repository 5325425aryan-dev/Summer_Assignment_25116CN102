#include <stdio.h>
int main() {
    int start, end, flag;

    scanf("%d %d", &start, &end);

    for(int i = start; i <= end; i++) {
        flag = 1;

        if(i <= 1)
            flag = 0;

        for(int j = 2; j <= i/2; j++) {
            if(i % j == 0) {
                flag = 0;
                break;
            }
        }

        if(flag)
            printf("%d ", i);
    }

    return 0;
}