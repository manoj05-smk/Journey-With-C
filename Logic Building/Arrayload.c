#include <stdio.h>
int main()
{
    //Count Even and Odd Numbers
    int n;
    printf("Enter a No.of.Elements:");
    scanf("%d",&n);
    printf("\n");
    int arr[n];
    printf("Enter Array Elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int odd=0,even=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2 ==0 )
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("No.Of Odd is %d\nNo.Of Even is %d",odd,even);
    return 0;
}