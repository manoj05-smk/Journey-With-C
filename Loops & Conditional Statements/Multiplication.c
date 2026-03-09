#include <stdio.h>
int main()
{
    //Multiplication Table
    int n,limit;
    printf("Which Table you Want? ");
    scanf("%d",&n);
    printf("Enter Limit:");
    scanf("%d",&limit);
    for(int i=1;i<=limit;i++)
    {
        printf("%d X %d = %d \n",i,n,i*n);
    }
}