#include<stdio.h>
int main()
{
       int A[10][10],B[10][10],Result[10][10];
       int r1,c1,r2,c2,i,j;
       int result,sum=0,k;
       printf("Enter 1st Matiricx row col= ");
       scanf("%d %d",&r1,&c1);
       printf("Enter 2nd matrix row col= ");
       scanf("%d %d",&r2,&c2);
       while(r1!=c2)
       {
              printf("Error\n");
              printf("Enter 1st Matiricx row col= ");
       scanf("%d %d",&r1,&c1);
       printf("Enter 2nd matrix row col= ");
       scanf("%d %d",&r2,&c2);

       }
//input first matricx
 printf("Enter First matrix input\n");
for(i=0;i<r1;i++)
{
       for(j=0;j<c1;j++)
       {
              printf("A[%d][%d]= ",i,j);

              scanf("%d",&A[i][j]);
       }
}
//input second matricx
 printf("Enter second matrix input\n");
for(i=0;i<r2;i++)
{
       for(j=0;j<c2;j++)
       {
              printf("B[%d][%d]= ",i,j);

              scanf("%d",&B[i][j]);
       }
}
//multiplying
for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            for (k = 0; k < c1; k++)
            {
                sum = sum + A[i][k] * B[k][j];
            }
            Result[i][j] = sum;
            sum = 0;
        }
    }

    // Print the first matrix
    printf("First matrix:\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    // Print the second matrix
    printf("Second matrix:\n");
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

    // Print the result matrix
    printf("Result matrix:\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("%d ", Result[i][j]);
        }
        printf("\n");
    }
}
