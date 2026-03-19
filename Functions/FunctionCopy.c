#include <stdio.h>

int display(int b)
{
    return b*b;
}
int main()
{
    //C passes arguments by value — meaning it copies the data
    int a=5;
    display(a);
    printf("This Value is Returned By a Display Function %d\n",display(a));
    printf("This is Original Value %d",a);
    return 0;
}