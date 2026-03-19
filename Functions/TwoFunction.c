#include <stdio.h>
//Note: Compiler Reads Top to Bottom
//method: Define prototype Initially
void function2()
{
    printf("This Is Function-----2\nThanks For visit..!");
}
void function1()
{
    printf("This Is Function-----1\n");
    function2();
}
int main()
{ 
    //Function to Function Call
    function1();
    return 0;
}