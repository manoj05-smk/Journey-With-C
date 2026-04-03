
#include <stdio.h>
typedef enum
{
    Low=30,
    Medium=60,
    High=100
}mark;
int main()
{
    mark m1;
    printf("Enter yor Marks To see Your Level:");
    scanf("%d",&m1);
    if(m1<=Low)
    {
        printf("You are in Low Level...Try to Improve Your Marks.");
    }
    else if(m1<=Medium)
    {
        printf("You are in Medium Level...Get More Marks.");
    }
    else if(m1<=High)
    {
        printf("Congrats..!Keep it up.");
    }
    else
    {
        printf("Invalid..!");
    }
    return 0;
}