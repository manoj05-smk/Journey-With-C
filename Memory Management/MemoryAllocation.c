#include <stdio.h>
#include <stdlib.h>
int main()
{
    //Memory Allocation Using malloc() & calloc()
    int *ptr=malloc(sizeof(int));
    if(ptr == NULL)
    {
        printf("Malloc Memory Doesn't allocated....\n");
    }
    else
    {
        printf("Malloc Memory Allocated successfully...\n");
    }
    int n;
    printf("Enter N to Allocate Memory:");
    scanf("%d",&n);
    int *pr=calloc(n,sizeof(int));
    if(pr == NULL)
    {
        printf("Calloc Memory Doesn't allocated....\n");
    }
    else
    {
        printf("Calloc Memory Allocated successfully...\n");
    }
    printf("%zu Bytes For malloc()\n",sizeof(*ptr));
    printf("%zu Bytes For calloc()",n*sizeof(*pr));
    return 0;
}