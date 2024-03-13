#include<stdio.h>
int point(int *p)
{
     int i,sum=0;
     for(i=0;i<5;i++)
     {
        sum=sum+*p;
        p++;

     }
return sum;
}



int main()
{
  int a[5],i;
  for(i=0;i<5;i++)
  {
      scanf("%d",&a[i]) ;

  }
int s=point(a);
int *ptr;
ptr=&s;
printf("%d",*ptr);



}

