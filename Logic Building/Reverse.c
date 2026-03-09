#include <stdio.h>
int main()
{
    //Reverse a number
    int n;
    int res=0;
    printf("Enter a Number:");
    scanf("%d",&n);
    while(n>0)
    {
        int temp=n%10;
        res=res*10+temp;
        n/=10;
    }
    printf("%d",res);
    return 0;
}