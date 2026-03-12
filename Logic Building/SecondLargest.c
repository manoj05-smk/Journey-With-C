#include <stdio.h>
int main()
{
    //Second Largest Element in ARRAY without Sorting
    int arr[]={5, 1, 4, 3, 6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int max1=arr[0];
    int max2=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max1)
        {
            max2=max1;
            max1=arr[i];
        }
        else if(arr[i]<max1 && arr[i]>max2)
        {
            max2=arr[i];
        }
        else
        {
            continue;
        }
    }
    printf("Second Largest Element in this array: %d",max2);
    return 0;
}