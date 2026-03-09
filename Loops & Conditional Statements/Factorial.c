#include <stdio.h>
int main()
{
    //Factorial
    int n,tot=1;
    printf("Enter N:");
    scanf("%d",&n);
    for(int i=n;i>0;i--)
    {
        tot*=i;
    }
    printf("Factorial of %d is %d.",n,tot);
    return 0;    
}