#include <stdio.h>
int main()
{
    //Understanding About Pointers
    int arr[]={1,2,3,4};
    printf("arr = %p\n",arr);
    printf("&arr[0] = %p\n",&arr[0]);
    printf("*arr = %d\n",*arr);
    printf("arr+1 = %p\n",arr+1);
    printf("*(arr+1) = %d\n",*(arr+1));
    printf("&arr[1] = %p\n",&arr[1]);
}