#include <stdio.h>
int main()
{
    //Armstrong Check
    int n,count=0;
    printf("Enter a Number:");
    scanf("%d",&n);
    int m=n;
    int p=n;
    // Count digits
    while(n>0)
    {
        n=n/10;
        count++;
    }
    int temp=0;
    // Armstrong calculation
    while(p>0)
    {
        int l=p%10;

        int power=1;
        for(int i=0;i<count;i++)
        {
            power=power*l;
        }

        temp=temp+power;
        p=p/10;
    }
    if(temp == m)
        printf("%d is an Armstrong Number",m);
    else
        printf("Not an Armstrong Number");
    return 0;
}