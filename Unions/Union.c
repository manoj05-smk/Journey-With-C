#include <stdio.h>
union data
{
    int val;
    float num;
    char var;
};
int main()
{
    //Basics about Union
    union data d1;
    d1.var='A'; //Here char ==> 1 bit memory
    printf("Now Memory Holds char var -> %c\n",d1.var);
    d1.val=100; //OverWitten char var here int ==> 4 bit memory
    printf("Now Memory Holds int Val -> %d\n",d1.val);
    printf("char var -> %c\n",d1.var);
    d1.num=12.56666; //OverWritten int val
    printf("Now Memory Holds float num -> %.2f\n",d1.num);
    printf("int Val -> %d\n",d1.val);
    printf("char var -> %c\n",d1.var);
    printf("Memory Size: %zu",sizeof(d1)); //prints Highest DataType memory Size
    return 0;
}