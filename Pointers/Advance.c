#include <stdio.h>
int ValueSquare(int n)
{
    n=n*n;
    return n;
}
int ReferenceSquare(int *n)
{
    *n=*n * *n;
    return *n;
}
int main()
{
    int x=10;

    //Pass by value
    printf("Before: x = %d\n",x);
    int res1=ValueSquare(x);
    printf("Pass by Value Function Square result %d\n",res1);
    printf("After: x = %d\n",x);
    printf("----------------------------------------------\n");
    //Passby Reference
    printf("Before: x = %d\n",x);
    int res2=ReferenceSquare(&x);
    printf("Pass by Reference Function Square result %d\n",res2);
    printf("After: x = %d\n",x);
    return 0;
}