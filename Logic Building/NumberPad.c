#include <stdio.h>
int main()
{
    // Number pad Code
    char number[][3] = {{'1','2','3'},
                        {'4','5','6'},
                        {'7','8','9'},
                        {'*','0','#'}};
    
    printf("*** Number Pad ***\n");
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%4c ",number[i][j]);
        }
        printf("\n");
    }
    return 0;
}