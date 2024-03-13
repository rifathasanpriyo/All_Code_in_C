#include<stdio.h>
int main()
{
    int n1,n2,n3,sum;
    float avg;
    printf("Enter 3 number for sum and average= ");
scanf("%d%d%d",&n1,&n2,&n3);
sum=n1+n2+n3;
avg= (float)sum/3;
printf("the sum=%d\n",sum);
printf("average=%f",avg);
    getch();

}
