#include <stdio.h>
int main()
{
    //Checking whether the Given Number is Perfect Number or Not
    int n;
    printf("Enter N:");
    scanf("%d",&n);
    int sum=0;
    for(int i=1;i<=n/2;i++)
    {
        if(n%i == 0)
        {
            sum +=i;
        }
    }
    if(sum == n)
    {
        printf("Perfect Number...");
    }
    else
    {
        printf("Not a Perfect Number...");
    }
    return 0;
}