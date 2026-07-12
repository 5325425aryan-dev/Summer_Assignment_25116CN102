#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int guess, number;

    srand(time(0));
    number = rand() % 100 + 1;

    printf("Guess a number (1-100): ");

    do {
        scanf("%d", &guess);

        if (guess > number)
            printf("Too High!\n");
        else if (guess < number)
            printf("Too Low!\n");
        else
            printf("Congratulations! You guessed correctly.\n");

    } while (guess != number);

    return 0;
}