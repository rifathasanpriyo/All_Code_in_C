#include<stdio.h>
int main()
{

       int a[3][4]={  {1,3,5,7},{3,1,4,6},{5,5,1,5}   };
       int row,col;
       for(row=0;row<3;row++)
       {
              for(col=0;col<4;col++)

                     printf(" %d ",a[row][col]);
              printf("\n");
       }





}
