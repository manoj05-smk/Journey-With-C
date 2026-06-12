#include <stdio.h>
int main()
{
    //Shopping Cart System
    char item[50]="";
    float price=0.0f;
    int quantity=0;
    float total=0.0f;
    printf("Which item you want to Buy? ");
    scanf("%[^\n]",item);

    printf("What is the price of an Item? ");
    scanf("%f",&price);

    printf("Enter the No.of Quantity:");
    scanf("%d",&quantity);

    printf("You Bought %s/s\n",item);
    total=quantity*price;
    printf("Pay %.2fRs and get your Items...\n",total);
    printf("Thank You For your Visit..!");
    return 0;
}