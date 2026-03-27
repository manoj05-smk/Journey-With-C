#include <stdio.h>
int main()
{
    //All numbers appear twice except one, Find the number that appears once
    int arr[]={1,2,4,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum = sum ^ arr[i]; //This Logic only for Even Occurence Elements
    }
    printf("Unique Number in an Array is %d",sum);
    return 0;
}