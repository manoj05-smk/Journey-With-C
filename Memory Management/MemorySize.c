#include <stdio.h>
int main()
{
    //Finding Memory Size of a Variable
    int n;
    char ch;
    float f;
    double d;
    printf("Integer Variable n Size is %zu Bytes\n",sizeof(n));
    printf("Character Variable ch Size is %zu Bytes\n",sizeof(ch));
    printf("Float Variable f Size is %zu Bytes\n",sizeof(f));
    printf("Double Varaible d Size is %zu Bytes\n",sizeof(d));
    return 0;
}