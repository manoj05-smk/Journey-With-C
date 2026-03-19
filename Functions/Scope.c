#include <stdio.h>
int x=10;
void function()
{
    printf("Original Global Value is %d\n",x);
    printf("This Function Increament the global variable value to %d",++x);
}
int main()
{
    //Change Of Global Variable Value
    printf("This is main Function (before Modification) %d\n",x);
    function();
    printf("\nThis is main Function (After Modification) %d",x);
    return 0;
}