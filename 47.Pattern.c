#include<stdio.h>
int main()
{

       int num,row,coll;
       printf("Enter Number = ");
       scanf("%d",&num);
       for(row=num;row>=1;row--)
       {
              for(coll=1;coll<=row;coll++)
                     printf("%d",coll);
              printf("\n");
       }




}
