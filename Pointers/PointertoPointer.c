#include <stdio.h>
int main()
 {
    int x=10;
    
    printf("x = %d\n",x);
    printf("x memory location is %p\n",&x);
    printf("------------------------------\n");

    //Pointer Creation
    int *p=&x;
    printf("P have this %p\n",p);
    printf("See what P Stored in %d\n",*p);
    printf("p memory location is %p\n",&p);
    printf("------------------------------\n");

    //Pointer to Pointer
    int **pp=&p;
    printf("PP have this %p\n",pp);
    printf("See what *PP have this %p\n",*pp);
    printf("See what PP Stored in %d\n",**pp);
    printf("PP memory location is %p\n",&pp);
    printf("------------------------------\n");
 }