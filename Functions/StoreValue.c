#include <stdio.h>

int subtraction(int a,int b)
{
    return a-b;
}
int main()
{
    //Store the result in a variable
    int res=subtraction(10,4);
    printf("Subtraction of 10 and 4 is => %d",res);
    return 0;
}