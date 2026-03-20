#include <stdio.h>
static inline int square(int n)
{
    return n*n;
}
int main()
{
    //Inline Usage (compiler to insert its code directly)
    printf("This is Inline Function Result: %d",square(5)); //<== copy the function code here
    return 0;
}