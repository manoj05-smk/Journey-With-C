#include <stdio.h>
int main()
{
    //Get Array Elements From User
    int n;
    printf("Enter a No.of.Elements:");
    scanf("%d",&n);
    printf("\n");
    // array created AFTER n is known
    int arr[n];
    printf("Enter Array Elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nLength of Array is %d",sizeof(arr)/sizeof(arr[0]));
    printf("\nArray Elements Are... ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}