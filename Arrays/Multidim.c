#include <stdio.h>
int main()
{
    //Multi-Dimensional Array
    int matrix[2][3]={ {1, 4, 2}, 
                       {3, 6, 8} };
    printf("%d",matrix[0][2]); // row=1 & Col=3 =>2
    return 0;
}