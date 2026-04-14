#include <stdio.h>
#include <stdlib.h>
int *fun()
{
    int *p=malloc(sizeof(int));  // (stored in Heap) survives function return
    *p=45;  //local variable (allocated in dynamic memory)
    return p;
}
int main()
{
    //Pointer To an Local Variable Execution
    int *ptr=fun();
    printf("Function returns this %d ",*ptr);
    return 0;
}