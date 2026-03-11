#include <stdio.h>
int main()
{
    //Matrix Addition,Subtraction,Multiplication & Transpose
    int r1,r2,c1,c2;
    printf("Enter No.of Rows & Columns For Matrix 1:\n");
    scanf("%d %d",&r1,&c1);
    printf("Enter No.of Rows & Columns For Matrix 2:\n");
    scanf("%d %d",&r2,&c2);
    int mat1[r1][c1];
    int mat2[r2][c2];
    printf("Enter Matrix 1:\n");
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("Enter Matrix 2:\n");
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            scanf("%d",&mat2[i][j]);
        }
    }
    printf("Matrix 1:\n");
     for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            printf("%d ",mat1[i][j]);
        }
        printf("\n");
    }
    printf("Matrix 2:\n");
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            printf("%d ",mat2[i][j]);
        }
        printf("\n");
    }
    //Addition
    int sum[r2][c2];
    printf("Matrix Addition:\n");
     for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            sum[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
     for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
    //Subtraction
    int sub[r2][c2];
    printf("Matrix Subtraction:\n");
     for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            sub[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
     for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            printf("%d ",sub[i][j]);
        }
        printf("\n");
    }
    //Transpose
    //m x n => n x m 
    int tran[c2][r2];
    printf("Matrix 2 transpose:\n");
     for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            tran[j][i] = mat2[i][j];
        }
    }
     for(int i=0;i<c2;i++)
    {
        for(int j=0;j<r2;j++)
        {
            printf("%d ",tran[i][j]);
        }
        printf("\n");
    }
    //Multiplication
    int res[r1][c2];  
    //i x j.j x k = i x k
    //Columns of Matrix1 = Rows of Matrix2
    if(c1 != r2)
    {
    printf("Multiplication not possible");
    }
    else
    {
         printf("Matrix Multiplication:\n");
         for(int i=0;i<r1;i++)
          {
              for(int j=0;j<c2;j++)
              {
                res[i][j]=0;
                for(int k=0;k<c1;k++)
                 {
                    res[i][j] += mat1[i][k] * mat2[k][j];
                 }
              }
          }
         for(int i=0;i<r1;i++)
         {
             for(int j=0;j<c2;j++)
             {
                printf("%d ",res[i][j]);
             }
             printf("\n");
         }
        }
         return 0;
}