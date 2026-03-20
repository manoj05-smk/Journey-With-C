#include <stdio.h>
int main()
{
    //Memory Address Checking
    int a=4;
    int b=5;
    char ch='A';
    float ft=1.22;
    printf("Address of 'a' is %p\n",&a);
    printf("Address of 'b' is %p\n",&b);
    printf("Address of 'ch' is %p\n",&ch);
    printf("Address of 'ft' is %p\n",&ft);
}