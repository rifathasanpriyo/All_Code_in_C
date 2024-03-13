#include<stdio.h>
int main()
{
       int num,temp,reminder,sum=0;
       printf("Enter Digits For Sum= ");
       scanf("%d",&num);
       temp=num;
       while(temp!=0)
       {
              reminder=temp%10;
              sum=sum+reminder;
              temp=temp/10;
       }
       printf("The Sum= %d",sum);



}
