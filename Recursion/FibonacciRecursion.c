#include <stdio.h>
int fib(int n)
{
    if(n==0) //base case 1
    {
        return 0;
    }
    if(n==1) //base case 2
    {
        return 1;
    }
    return fib(n-1)+fib(n-2);
}
int main()
{
    //Fibonacci Using Recursion
    int n;
    printf("Enter N:");
    scanf("%d",&n);
    printf("Fibonacci of %dth term is %d",n,fib(n)); // start from 0
    return 0;
}