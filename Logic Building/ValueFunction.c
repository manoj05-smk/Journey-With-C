#include <stdio.h>
int value(int n)
{
    return (n>0) ? 1: (n==0 ? 0 : -1); //Nested Ternery Usage
}
int main()
{
    //Sign Checking Function
    int arr[]={-5, 0, 3, -1, 7};
    int k=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<k;i++)
    {
        if(value(arr[i]) == 1)
        {
            printf("%d is a Positive Value\n",arr[i]);
        }
        else if(value(arr[i]) == 0)
        {
            printf("%d is a Zero\n",arr[i]);
        }
        else
        {
            printf("%d is a Negative Value\n",arr[i]);
        }
    }
}