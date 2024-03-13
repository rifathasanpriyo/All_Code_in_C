#include<stdio.h>
int main()
{
       int x=11,y=99;
       int *p;
       p=&x; //address print korar jonno
       printf("x address size:%d\n",p);
       printf("x valu:%d\n",*p);
       p=&y;
       printf("\n\ny address size:%d\n",p);
       printf("y valu:%d\n",*p);
}
