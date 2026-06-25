#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int userChoice();
int computerChoice();
void checkWinners(int user,int computer);
int main()
{
    // STONE PAPER SCISSOR Game
    srand(time(NULL));
    int user=0;
    int computer=0;
    printf("-------------------------------------------\n");
    printf("^^^ Welcome to ROCK PAPER SCISSOR GAME ^^^\n");
    printf("-------------------------------------------\n");
    while(1)
    {
        user = userChoice();
        if(user != 4)
        {
            computer = computerChoice();
            checkWinners(user,computer);
        }
        else
        {
            break;
        }
    }
    return 0;
}
int userChoice()
{
    int choice;
    do
    {
        printf("*****************\n");
        printf("*     Menu:     *\n");
        printf("*****************\n");
        printf("1.STONE\n2.PAPER\n3.SCISSOR\n4.EXIT\n");
        printf("==================\n");
        printf("Enter Your Choice:");
        scanf("%d",&choice);
        switch (choice)
        {
            case 1:
                printf("You Choosen STONE...\n");
                return 1;
            case 2:
                printf("You Choosen PAPER...\n");
                return 2;
            case 3:
                printf("You Choosen SCISSOR...\n");
                return 3;
            case 4:
                printf("Thank You For Your Playing...\n");
                return 4;
            default:
                printf("You Choosen Invalid Choice..!\n");
                printf("----------------------------------\n");
        }
    } 
    while(choice != 4);
}
int computerChoice()
{
    int choice = rand() % 3 + 1;
    if(choice == 1)
    {
        printf("Computer Choosen STONE...\n");
    }
    else if(choice == 2)
    {
        printf("Computer Choosen PAPER...\n");
    }
    else
    {
        printf("Computer Choosen SCISSOR...\n");
    }
    return choice;
}
void checkWinners(int user,int computer)
{
    if((user == 1 && computer == 3) || (user == 2 && computer == 1) ||
       (user == 3 && computer == 2))
    {
        printf("---> You WON..! <---\n");
        printf("_______________\n");
    }
    else if( user == computer)
    {
        printf("---> Match DRAW..! <---\n");
        printf("_______________\n");
    }
    else
    {
        printf("---> Computer WON..! <---\n");
        printf("_______________\n");
    }
}
