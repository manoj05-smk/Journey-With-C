#include <stdio.h>
#include <stdlib.h>
int* reverseArray(int* arr1, int n)
{
    int *temp=calloc(n,sizeof(int));
    int c=0;
    for(int i=n-1;i>=0;i--)
    {
        temp[c]=arr1[i];
        c++;
    }
    return temp;

}
int main()
{
    //Reverse Array Using Dynamic Memory(heap)
    int n;
    printf("Enter N:");
    scanf("%d",&n);
    int *arr1=calloc(n,sizeof(int));
    printf("\nEnter Elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }
    int *arr2=reverseArray(arr1,n);
    printf("Reversed Array:\n");
    for(int j=0;j<n;j++)
    {
        printf("%d ",arr2[j]);
    }
    free(arr1);
    free(arr2);
    return 0;
}