// A simple Game where player has to guess the number between a given range
// If ur 1st attempt goes wrong game suggest you enter a higher or lower value
// Try to guess it within minimum attemps to score high
// Only 15 attempts are allowed ^_^

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    int guess, attempt = 1, num;

    srand(time(0));
    num = rand() % 100 + 1;
    printf("\nGuess a number between 1 to 100 : ");
    scanf("%d", &guess);

    do
    {
        if (attempt > 1)
        {
            printf(" \n\n^_^ Try again : ");
            scanf("%d", &guess);
        }

        if (guess > num && attempt < 15)
            printf("\nEnter a lower number :) ");

        else if (guess < num && attempt < 15)
            printf("\nEnter a Higher number :) ");

        else if (guess == num)
        {
            printf("\n=======================================");
            printf("\nWoohoo! You made it in %d attempts.", attempt);
            printf("\nScore : %d out of 1500", (15 - attempt) * 100);
            printf("\n=======================================");
        }

        attempt++;

    } while ((guess != num) && (attempt <= 15));

    if (attempt > 15)
    {
        printf("\nUr out of Attempts! ^_^' Better luck Nxt time");
    }

    printf("\n\n");
    return 0;
}