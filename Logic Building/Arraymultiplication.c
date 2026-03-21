#include <stdio.h>
void multiplication(int arr[],int n,int val)
{
    for(int i=0;i<n;i++)
    {
        arr[i]=arr[i]*val;
    }
}
int main()
{
    //Multiplies every element by a given factor
    int arr[]={2,5,7,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("Before Multiplication:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    multiplication(arr,n,4);
    printf("After Multiplication:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
}