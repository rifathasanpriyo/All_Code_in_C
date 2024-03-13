#include<stdio.h>
double tr(double b, double h)
{
return 0.5*b*h;
}
int main()
{

      double base,height,result;
       printf("Enter Number = ");
       scanf("%lf %lf",&base,&height);
       result=tr(base,height);
       printf("result %.1lf",result);






}

