#include<stdio.h>
int main()
{
       char s1[]="Rifat";
       char s2[30];
       int i=0,j=0,len=0;
       while(s1[i]!='\0')
       {
         i++;
         len++;
       }


       for(j=0,i=len-1;i>=0;i--,j++)
       {


              s2[j]=s1[i];

       }
              s2[j]='\0';
              printf("s2=%s",s2);


}
