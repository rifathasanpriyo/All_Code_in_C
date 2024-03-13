#include<stdio.h>
#include<math.h>
int main()
{
    double x;
    printf("Enter round valu= ");
    scanf("%lf",&x);
    double result=round(x);
    printf("round=%.2lf",result);
}
