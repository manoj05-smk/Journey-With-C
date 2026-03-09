#include <stdio.h>
int main()
{
    int n,sum=0;
    // sum of N Numbers
    printf("Enter N:");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("Total Sum Upto %d is %d",n,sum);
    return 0;
}