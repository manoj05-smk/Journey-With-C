#include <stdio.h>
int main()
{
   //Prime Number Check
   int n,i,flag=0;
   printf("Enter a number: ");
   scanf("%d", &n);
   if(n <= 1)
   {
    printf("It is a Not Prime Number...");
    return 0;
   }
   //For Optimization Use i*i <= n (root method)
   for(i=2;i<=n/2;i++)
   {
        if(n%i == 0)
        {
            flag=1;
            break;
        }
    }
    if(flag == 0)
    {
        printf("It is a Prime Number...");
    }
    else
    {
        printf("It is Not a Prime Number...");
    }
    return 0;
}
