#include <stdio.h>
int main()
{
    // Even Numbers From 1 to 100
    printf("Even Numbers From 1 to 100:\n");
    for(int i=1;i<=100;i++)
    {
        if(i%2==0)
        {
            printf("%d\n",i);
        }
    }
}