#include <stdio.h>
void main()
{
    //change an Element in ARRAY
    int n,temp;
    printf("Enter N:");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter a Elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
     printf("\nBefore Change Of Array:");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\nEnter Index to Change:");
    scanf("%d",&temp); 
    if(temp<n)
    {
        printf("\nEnter Index to Change:");
        scanf("%d",&arr[temp]);//Known Index So we can Modify Directly
    }
    else
    {
        printf("\nArray Index Out Of Bound...So can't be Modified!");
    }
    printf("\nAfter Change Of Array:");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}