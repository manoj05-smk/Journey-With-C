#include <stdio.h>
void reverse(int *arr,int n)
{
    for(int i=0;i<n/2;i++)
    {
        int temp = *(arr+i);
        *(arr+i) = *(arr+n-1-i);
        *(arr+n-1-i) = temp;
    }
}
int main()
{
    // In-place reverse of an array Using pointer arithmetic
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("Before Reversing:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    reverse(arr,n);
    printf("After Reversing:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}