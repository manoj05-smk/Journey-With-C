#include <stdio.h>
int main()
{
    //Basics about Pointers
    int x=5;

    printf("x = %d\n",x);
    printf("x memory location is %p\n",&x);
    printf("------------------------------\n");
    //Pointer Creation
    int* p=&x;

    printf("P have this %p\n",p);
    printf("See what P Stored in %d\n",*p);
    printf("p memory location is %p\n",&p);
    printf("------------------------------\n");

    //Modification
    *p=99;
    printf("P = %d\n",*p);
    printf("x = %d\n",x);
}