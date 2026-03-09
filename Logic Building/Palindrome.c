#include <stdio.h>
int main()
{
    //palindrome Check
    int n;
    printf("Enter a Number:");
    scanf("%d",&n);
    int m=n;
    int digit;
    int sum=0;
    for(int i=n;i>0;i/=10)
    {
        digit=i%10;
        sum=sum*10+digit;
    }
    if(m==sum)
    {
        printf("%d is Palindrome Number...",m);
    }
    else
    {
        printf("It is Not a Palindrome Number...");
    }

}