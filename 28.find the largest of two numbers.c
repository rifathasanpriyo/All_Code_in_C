#include<stdio.h>
int main()
{
    int n,count=0,i;
    printf("Enter A number = ");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            count++;
            break;
        }
    }
if(count==0)
{
  printf("Prime")  ;

}
else
    printf("not prime");


}
