#include<stdio.h>
int main()
{

       int A[10][10],B[10][10],C[10][10];
       int row,col,numrow,numcol;
       printf("Who many row and col you want?= ");
       scanf("%d %d",&numrow,&numcol);
           //A matrix input
       printf("Enter Elements of A martix\n ");
       for(row=0;row<numrow;row++)
       {
              for(col=0;col<numcol;col++)
              {


                     printf("A[%d][%d] = ",row,col);
                     scanf("%d",&A[row][col]);
              }
       }
//B matrix input

       printf("Enter Elements of B martix\n ");
       for(row=0;row<numrow;row++)
       {
              for(col=0;col<numcol;col++)
              {


                     printf("B[%d][%d] = ",row,col);
                     scanf("%d",&B[row][col]);
              }
       }
//c matrix
for(row=0;row<numrow;row++)
       {
              for(col=0;col<numcol;col++)
              {
C[row][col]=A[row][col]+B[row][col];

}

       }
//c matrix print
printf("Addition A+B\n");
for(row=0;row<numrow;row++)
       {
              for(col=0;col<numcol;col++)
              {
                 printf("%d\t", C[row][col]);
              }
              printf("\n");
       }

}
