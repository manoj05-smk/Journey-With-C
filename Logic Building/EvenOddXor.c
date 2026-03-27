#include <stdio.h>
int main()
{
    //Find Odd or Even using BitWise Operator
    int n;
    printf("Enter N:");
    scanf("%d",&n);
    printf("\n");
    if(n&1)
    {
        printf("Odd Number");
    }
    else
    {
        printf("Even number");
    }
    return 0;
}