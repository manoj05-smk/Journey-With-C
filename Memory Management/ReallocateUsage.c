#include <stdio.h>
#include <stdlib.h>
int main()
{
    //Re-Allocation of Memory
    int size1=5*sizeof(int);
    int *ptr1=malloc(size1);
    printf("%d Bytes was Allocated at Address %p\n",size1,ptr1);
    for(int i=0;i<5;i++)
    {
        ptr1[i]=(i+1)*5;
    }
    printf("Storage in Ptr1:\n");
    for(int i=0;i<5;i++)
    {
        printf("%d has %d\n",i+1,ptr1[i]);
    }
    printf("Re-Allocating memory:\n");
    int size2=10*sizeof(int);
    int *ptr2=realloc(ptr1,size2);
    if(ptr2 != NULL)
    {
        printf("%d Bytes was Re-Allocated at Addrees %p\n",size2,ptr2);
        ptr1=ptr2; //Pointer Updation
    }
    for(int i=0;i<10;i++)
    {
        printf("%d has %d\n",i+1,ptr1[i]);
    }
    free(ptr1);
    ptr1=NULL;
    return 0;
}