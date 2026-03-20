#include <stdio.h>
int main()
{
    //Array and Pointers
    int arr[]={1,2,3,4};
    printf("Address of first Element in an Array: %p\n",&arr[0]);
    // Array name IS a pointer to first element
    printf("Address of First Element in an Array (Pointer): %p\n",arr); 
    printf("----------------------------------------------------\n");
    printf("First element using Array Index: %d\n",arr[0]);  
    printf("First element using Array Pointer: %d\n",*arr);
    printf("----------------------------------------------------\n");
    //Printing Elements in an Array Using Pointers
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    {
        printf("%d Index = %d\n",(i+1),*(arr+i));
    }
}