#include <stdio.h>
void removeduplicates(int *arr,int *size)
{
    for(int i=0;i<*size;i++)
    {
        for(int j=i+1;j<*size;j++)
        {
            if(*(arr+i) == *(arr+j))
            {
                for(int k=j;k<*size-1;k++)
                {
                    *(arr+k) = *(arr+k+1);
                }
                (*size)--;
                j--; //For Rechecking at that same index again
            }
        }
    }
}
int main()
{
    int arr[]={3,1,4,1,5,9,2,6,6,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("Before Removal:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    printf("Size %d\n",n);
    removeduplicates(arr,&n);
    printf("After Removal:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    printf("Size %d\n",n);
    return 0;
}