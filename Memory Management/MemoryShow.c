#include <stdio.h>
#include <stdlib.h>
int main()
{
    //Dynamic Memory Allocation 
    int n=5;
    int *m_ptr=malloc(n*sizeof(int)); //Initialize Garbage Values
    printf("Malloc() has\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",m_ptr[i]);
    }
    printf("\n");
    printf("Calloc() has\n");
    int *c_ptr=calloc(n,sizeof(int));  //Initialize Zeros
    for(int j=0;j<n;j++)
    {
        printf("%d ",c_ptr[j]);
    }
    free(m_ptr);
    free(c_ptr);
}