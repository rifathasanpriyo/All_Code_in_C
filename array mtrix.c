#include<stdio.h>

int main() {
    int a[5]={1,2,3,4,5},i,k;
    scanf("%d",&k);
    for(i=0;i<5;i++)
    {
           if(i<k)
              {
                  a[i]  = 0;
              }
           else
           {

               a[i] =a[k-i];
           }



    }
    for(i=0;i<5;i++)
    {

           printf("%d,",a[i]);
    }
    return 0;
}
