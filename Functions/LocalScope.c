#include <stdio.h>
int x=5;
void local()
{
    int x=9;
    printf("x : %d\n",x);
}
int main()
{
    //Global Scope and Local Scope
    local();
    printf("This is main Function x : %d",x);
    return 0;
}