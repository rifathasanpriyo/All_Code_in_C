#include<stdio.h>
struct people
{
    int age;
    float salary;

};
int main()
{
    struct people person[4];
    int i;
    for(i=0; i<4; i++)
    {
        printf("Enter Information person %d\n",i+1);
        printf("Enter Age:");
        scanf("%d",&person[i].age);
        printf("Enter Salary: ");

        scanf("%f",&person[i].salary);

    }
    for(i=0; i<4; i++)
    {
        printf("\nInformation person %d",i+1);
        printf("\nAge:%d",person[i].age);

        printf("\nSalary:%f",person[i].salary);



    }



}
