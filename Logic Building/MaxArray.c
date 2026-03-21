#include <stdio.h>
void findmax(int arr[],int size)
{
    int max=arr[0];
    for(int i=0;i<size;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    printf("Max Element in array is %d",max);
}
int main()
{
    //maximum element in an array Using Function
    int n;
    printf("Enter N:");
    scanf("%d",&n);
    printf("\n");
    int arr[n];
    printf("Enter Elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    findmax(arr,n); //arr = &arr[0] <=Points to First element
}