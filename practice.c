#include<stdio.h>
int main()
{
    int num;
    printf("Input month number: ");
    scanf("%d",&num);
    switch(num)
    {
    case 1:
        printf("Total number of days = 31");
        break;
    case 2:
        printf("Total number of days = 28");
        break;
    case 3:
        printf("Total number of days = 31");
        break;
    case 4:
        printf("Total number of days = 30");
        break;
    case 5:
        printf("Total number of days = 31");
        break;
    case 6:
        printf("Total number of days = 30");
        break;
    case 7:
        printf("Total number of days = 31");
        break;
    case 8:
        printf("Total number of days = 31");
        break;
    case 9:
        printf("Total number of days = 30");
        break;
    case 10:
        printf("Total number of days = 31");
        break;
    case 11:
        printf("Total number of days = 30");
        break;
    case 12:
        printf("Total number of days = 31");
        break;
    default:
        printf("Not valid number");
    }




    getch();




}
