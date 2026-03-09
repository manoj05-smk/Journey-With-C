#include <stdio.h>
int main()
{
    //Reverse of Array
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("Original Array:");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\nReverse Of Array:");
    for(int i=n-1;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }
    return 0;

}