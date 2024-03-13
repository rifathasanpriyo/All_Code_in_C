#include<stdio.h>
int main()
{
       int num1,num2,rum,gcd,lcm,n1,n2;
       printf("Enter 2 number = ");
       scanf("%d %d",&num1,&num2);
       n1=num1;
       n2=num2;
       while(n2!=0)
       {
              rum=n1%n2;
              n1=n2;
              n2=rum;
              gcd=n1;
              lcm=(num1*num2)/gcd;

       }

       printf("GCD=%d\n",gcd);
       printf("LCM=%d",lcm);





}
