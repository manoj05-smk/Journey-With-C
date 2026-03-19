#include <stdio.h>
int sum(int n)
{
    if(n<1)
    {
        return 0;
    }
    return n+sum(n-1);
}
int main()
{
    //Recursion Addition
    int n;
    printf("Enter N: ");
    scanf("%d",&n);
    printf("Sum of upto %d is %d",n,sum(n));
    return 0;
}