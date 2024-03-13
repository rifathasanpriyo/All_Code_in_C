#include<stdio.h>

enum days
{
    sun=1,mon,tue,wed,thu,fri,sat
};
int main()
{

       enum days day1,day2,dif;
       day1=sun;
       day2=fri;
       dif=day2-day1;
       printf("Day1 %d",day1);

       printf("\nDay2 %d",day2);
       printf("\nDifferance %d",dif);



}
