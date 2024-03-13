#include<stdio.h>

void arry(int x[],int n1)
{
       int i;
       int max=x[0];
       for(i=1;i<n1;i++)
       {
          if(max<x[i])
              max=x[i];

       }
       printf("%d",max);
}

int main()
{
       int n1,num[30],i;
       printf("Enter Amount = ");
       scanf("%d",&n1);
       for(i=0;i<n1;i++)
       {
              scanf("%d",&num[i]);
       }
       arry(num,n1);



}
