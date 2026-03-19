#include <stdio.h>
void array(int temp[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("Index %d have %d\n",i+1,temp[i]);
    }
}
int main()
{
    //Passing Arrays as Function Parameters
    int arr[]={1,2,3,4,5};
    int k=sizeof(arr)/sizeof(arr[0]);
    array(arr,k);
    return 0;
}