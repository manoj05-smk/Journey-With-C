#include <stdio.h>
int main()
{
    //Sizeof() Usage
    int arr[]={1,2,3,4,5};
    printf("Tot Size: %d",sizeof(arr));//In Bytes
    printf("\nLength Of Array: %d",sizeof(arr)/sizeof(arr[0]));
}