#include <stdio.h>
void main()
{
    //Two Dimensional Array/Matrix Exercise
    int row,col;
    printf("Enter No.Of Rows:");
    scanf("%d",&row);
    printf("\n");
    printf("Enter No.Of Cols:");
    scanf("%d",&col);
    int arr[row][col];
    printf("\nFill the Elements:");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nYour Matrix is:\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    char temp;
    int x,y;
    printf("\nDo You Want to change element in Matrix ('y'->Yes,'n'->No):");
    scanf(" %c",&temp);
    if(temp == 'y')
    {
        printf("\nEnter Index:");
        printf("\nFor Row & Col:");
        scanf("%d %d",&x,&y);
        printf("\nEnter Element:");
        scanf("%d",&arr[x][y]);
        printf("\nSucessFully Changed...");
    }
    else
    {
        printf("\nThank You...");
    }
}