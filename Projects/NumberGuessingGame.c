#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    //NUMBER GUESSING GAME

    srand(time(0)); //NULL == 0

    int min = 1;
    int max = 100;
    int guess = 0;
    int tries = 0;

    //Math Formulae for Random Number
    int random = (rand() % (max - min + 1)) + min;
    printf("*** Welcome to NUMBER GUESSING GAME ***\n ");

    do
    {
        printf("Enter Your Guess Limit Between ( %d to %d): ",min,max);
        scanf("%d",&guess);
        tries++;
        if(guess > random)
        {
            printf("Your Guess is TOO HIGH..!\n");
        }
        else if (guess < random)
        {
            printf("Your Guess is TOO LOW..!\n");
        }
        else
        {
            printf("CONGRATS..!YOU NAILED IT.\n");
        } 
    }
    while(guess != random);
    printf("You Tried %d Times...",tries);
    return 0;
}