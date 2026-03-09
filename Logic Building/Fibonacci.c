#include <stdio.h>
int main()
{
    // Fibonacci Series
    int n;
    printf("Enter No.Of Terms:");
    scanf("%d",&n);
    int a=0,b=1,c;
    printf("Fibonacci Series upto %d terms:\n", n);
    for(int i=0;i<n;i++)
    {
        //Hint: Right Shift
        printf("%d ",a);//Take value a
        c=a+b;
        a=b;
        b=c;
    }
    return 0;
}