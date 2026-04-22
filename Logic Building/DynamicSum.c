#include <stdio.h>
#include <stdlib.h>
int sum(int *arr,int n)
{
    int l=0;
    for(int i=0;i<n;i++)
    {
        l += *(arr+i);
    }
    return l;
}
int main()
{
    //Dynamic Memory Sum
    int n;
    printf("Enter N:");
    scanf("%d",&n);
    int *arr=malloc(n*sizeof(int));
    printf("\n");
    printf("Enter Elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int res=sum(arr,n);
    printf("The sum of Dynamic Array is %d",res);
    free(arr);
    arr=NULL;
    return 0;
}