#include <stdio.h>
int main()
{
    //Find Missing Number using XOR
    int arr[]={1,2,4,5,6};
    int n=6;
    int size=sizeof(arr)/sizeof(arr[0]); //Here arr has 5 elements
    int x1=0,x2=0;
    for(int i=0;i<size;i++)
    {
        x1=x1^arr[i];
    }
    for(int j=1;j<=n;j++)
    {
        x2=x2^j;
    }
    printf("Missing Number is %d",x1^x2);
    return 0;
}