#include <stdio.h>
typedef enum 
{
    Red=1, //Default change 0 -> 1
    Blue,
    Green,
    Pink,
    Yellow,
    Orange
} color; 
int main()
{
    color c1;
    printf("Enter Number to See a Color Code (1-6):");
    scanf("%d",&c1);
    switch (c1)
    {
    case Red:
        printf("This is RED Color Code...");
        break;
    case Blue:
        printf("This is Blue Color Code...");
        break;
    case Green:
        printf("This is GREEN Color Code...");
        break;
    case Pink:
        printf("This is PINK Color Code...");
        break;
    case Yellow:
        printf("This is YELLOW Color Code...");
        break;
    case Orange:
        printf("This is ORANGE Color Code...");
        break;
    default:
        printf("Invalid Input!");
        break;
    }
return 0; 
}
