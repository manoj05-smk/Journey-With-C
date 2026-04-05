#include <stdio.h>
#include <stdlib.h>
int manhatten(int x1,int y1,int x2,int y2)
{
    int r1=abs(x2-x1);
    int r2=abs(y2-y1);
    return r1+r2;
}
int main()
{
    //Calculation of Manhattan Distance
    int x1,y1,x2,y2;
    printf("\nEnter a Value For Coordinates X1 & Y1:");
    scanf("%d %d",&x1,&y1);
    printf("\nEnter a Value For Coordinates X2 & Y2:");
    scanf("%d %d",&x2,&y2);
    int result=manhatten(x1,y1,x2,y2);
    printf("Distance Between Two Coordinates is %d",result);
    return 0;
}