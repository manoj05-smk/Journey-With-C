#include <stdio.h>
int main()
{
    //Count a digit
    int n,count=0;
    printf("Enter a Number:");
    scanf("%d",&n);
    int l=n;
    while(n>0)
    {
        count++;
        n/=10;
    }
    printf("No.Of Digit Of %d is %d",l,count);
    return 0;
}