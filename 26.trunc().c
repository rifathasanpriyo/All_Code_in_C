#include<stdio.h>
#include<math.h>
int main()
{
    double x;
    printf("Enter trunc valu= ");
    scanf("%lf",&x);
    double result=trunc(x);
    printf("trunc=%.2lf",result);
}
