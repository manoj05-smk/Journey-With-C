#include <stdio.h>
int recursion(int n)
{
    if(n<0) //base case
    {
        return 0;
    }
    printf("%d times Running...\n",6-n);
    recursion(n-1);
}
int main()
{
    //Recursion Running Checking
    recursion(5);
    return 0;
}