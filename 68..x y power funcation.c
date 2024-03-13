#include<stdio.h>
void power (int a,int b)
{
       int re=1,i;
       for(i=1;i<=b;i++)
              re=re*a;
        printf("Result=%d",re);
}


int main()
{
       int x,y;
       printf("x= ");
       scanf("%d",&x);
       printf("y= ");
       scanf("%d",&y);
power(x,y);


}
