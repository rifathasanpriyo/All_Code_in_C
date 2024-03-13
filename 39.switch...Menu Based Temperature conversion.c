#include<stdio.h>
int main()
{
    int num;

    float temp;

    printf("Selete A Number Temperature Conversion\n ");
    printf("1.Fahrenhite to Celsine\n");
    printf(" 2.Celsine to Fahrenhite\n");
    printf("Enter A Option= ");
    scanf("%d",&num);
    switch(num)
   {

   case 1:
{
    printf("Enter Fahrenhite number= ");
    scanf("%d",&num);
    temp=((num-32)*5)/9;
    printf("The Celsine=%.2f",temp);
    break;
    }
     case 2:
    {
        printf("Enter Celsine number= ");
        scanf("%d",&num);
        temp=((num*9)/5)+32;
        printf("The Fahernhit=%.2f",temp);
break;
    }
     default:
       printf("Not valid ");
   }


}

