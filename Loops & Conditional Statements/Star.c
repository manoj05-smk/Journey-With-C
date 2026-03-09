#include <stdio.h>
int main()
{
    int n;
    printf("Enter N:");
    scanf("%d",&n);
    if(n>0)
    {
        for(int i=0;i<n;i++)
        {
            printf("***\n");
        }
    }
    return 0;
}