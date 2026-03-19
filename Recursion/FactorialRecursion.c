#include <stdio.h>
int fact(int n)
{
    if(n==0 || n==1) //base cases
    {
        return 1;
    }
    return n*fact(n-1);
}
int main()
{
    //Factorial using Recursion
    int a=5;
    printf("Factorial of %d is %d",a,fact(a));
    return 0;
}