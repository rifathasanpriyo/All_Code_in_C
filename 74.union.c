#include<stdio.h>
union test
{
    int n1,n2;
};
int main()
{
    union test t1;
    t1.n1=10;
    printf("T1 n1=%d",t1.n1);
    printf("\nT1 n2=%d",t1.n2);

    t1.n2=29;
    printf("\nT1 n1=%d",t1.n1);
    printf("\nT1 n2=%d",t1.n2);

}
