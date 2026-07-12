#include <stdio.h>

int main() {

    int score = 0, ans;

    printf("Q1. Capital of India?\n");
    printf("1. Delhi\n2. Mumbai\n3. Chennai\n4. Kolkata\n");
    scanf("%d", &ans);

    if(ans == 1)
        score++;

    printf("\nQ2. 5 + 5 = ?\n");
    printf("1. 8\n2. 10\n3. 12\n4. 15\n");
    scanf("%d", &ans);

    if(ans == 2)
        score++;

    printf("\nQ3. C Language was developed by?\n");
    printf("1. Dennis Ritchie\n2. James Gosling\n3. Bjarne Stroustrup\n4. Guido van Rossum\n");
    scanf("%d", &ans);

    if(ans == 1)
        score++;

    printf("\nYour Score = %d/3\n", score);

    return 0;
}