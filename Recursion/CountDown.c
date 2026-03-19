#include <stdio.h>
int countdown(int n)
{
    if(n==0) //base case
    {
        printf("Start...");
        return 0;
    }
    else
    {
        printf("%d\n",n);
        countdown(n-1);
    }
}
int main()
{
    //CountDown Using Recursion
    countdown(10);
    return 0;
}