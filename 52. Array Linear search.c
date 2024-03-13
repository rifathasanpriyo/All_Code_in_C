#include<stdio.h>
int main()
{
       int num[]={10,20,40,23,80};
       int i,valu,pos=-1;
       printf("Enter search number = ");
       scanf("%d",&valu);
       for(i=0;i<6;i++)
       {
              if(valu==num[i])
                    {

                     pos=i+1;
              break;
                    }
       }
       if(pos==-1)
       {
              printf("Item not found");
       }
       else
              printf("The position %d",pos);
}
