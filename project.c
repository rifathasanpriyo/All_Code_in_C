#include<stdio.h>

int main()
{
    int pass;

    printf("Set a pin number: ");
    scanf("%d", &pass);
    printf("Thank you\n");

    int conf;
    int match = 0;
    do
    {
        printf("Confirm The Pin: ");
        scanf("%d", &conf);

        if (conf == pass)
        {
            match = 1;
            printf("Successful\n");
        }
        else
        {
            printf("Not successful. Please try again.\n");
        }
    } while (match == 0);



    int a[]={30,45,72,87,90};
    int roll,i,po=-1;
    printf("Enter Your Roll Number: ");
    scanf("%d", &roll);
    for(i=0;i<6;i++)
    {
           if(roll==a[i])
           {
                  po=i+1;
break;
           }
           }
           if(po==-1)
           {
                  printf("you Fail");


           }
           else
           {
                  printf("Your Position %d",po);
           }





    return 0;
}
