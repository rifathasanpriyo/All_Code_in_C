#include<stdio.h>
int main()
{
    int a[100],n,i,sum=0;

    printf("Enter n number=");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
     scanf("%d",&a[i]);
    }

    for(i=0; i<n; i++)
    {
        sum=sum+a[i];
    }

    printf("sum %d\n",sum);
    printf("Average %.2f", (float) sum/n);

}
