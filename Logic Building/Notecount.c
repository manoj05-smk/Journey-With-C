#include <stdio.h>
int main() 
{
    //calculates the minimum number of notes required to reach that sum using 500, 200, and 100
    int amount;
    printf("Enter a Amount:");
    scanf("%d",&amount);
    if(amount%100==0)
    {
        int a=amount/500;
        printf("Needed 500 Notes:%d",a);
        int rem=amount%500;
        int r2=rem/200;
        int r3=rem/100;
       
        printf("\nNeeded 200 Notes:%d",r2);
        printf("\nNeeded 100 Notes:%d",r3);
        if(a>0)
        {
            int tot;
            if(r2<r3)
            {
                tot=a+r2;
            }
            else
            {
                tot=a+r3;
            }
            printf("\nTotal Count %d",tot);
        }
    }
    else
    {
        printf("Not Valid Amount...");
    }
    return 0;
}