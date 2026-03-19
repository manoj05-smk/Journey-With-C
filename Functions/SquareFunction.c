#include <stdio.h>
int square(int n)
{
    return n*n;
}
int main()
{
    // square of a number Using Function
    for(int i=1;i<=10;i++)
    {
        int result=square(i);
        printf("Square of %d is %d\n",i,result);
    }
    return 0;
}
