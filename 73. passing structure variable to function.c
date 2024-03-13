//passing structure variable to function
#include<stdio.h>
struct person
{
    int age;
    float salary;
    char name[50];
};
void display(struct person p)
{

    printf("\nName:%s\nAge:%d\nSalary:%f\n",p.name,p.age,p.salary);

}


int main()
{
    struct person person1= {25,2379.33},person2= {27,52626.984},person3= {40,8732.5};
    strcpy(person1.name,"Rifat Hasan");
    display(person1);

    strcpy(person2.name,"Priyo Hasan");
    display(person2);

    strcpy(person3.name,"Kalam Islam");
    display(person3);
}
