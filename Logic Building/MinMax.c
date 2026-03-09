#include <stdio.h>
int main()
{
    //Min & Max in Array
    int n;
    printf("Enter N:");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter a Elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nInserted Array:");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    int min=arr[0];
    int max=arr[0];
    //Minimum in Array
    for(int i=0;i<n;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    printf("\nMinimum in Array is %d",min);
    //Maximum in Array
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    printf("\nMaximum in Array is %d",max);

    //Optimized Version for this...
    // for(int i=1;i<n;i++)
    // {
    //     if(arr[i] < min)
    //         min = arr[i];
    //     if(arr[i] > max)
    //         max = arr[i];
    // }
    
    return 0;

}