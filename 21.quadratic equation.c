#include<stdio.h>
int main()
{
    double a,b,c,d,x1,x2;
    printf("Enter a b c valu= ");
    scanf("%lf %lf %lf",&a,&b,&c);
    d=sqrt(b*b-4*c*a);
    x1=(-b+d)/(2*a);
    x2=(-b-d)/(2*a);
    printf("X1=%lf\n",x1);
    printf("X2=%lf",x2);
    return 0;




}
