#include<stdio.h>
struct person
{
    int age;
    float salary ;
};

int main()
{
    struct person person1,person2;
    person1.age=24;
    person1.salary=1998.93;
    printf("Person1 Age= %d",person1.age);
    printf("\nPerson1 salary= %f",person1.salary);
    person2.age=34;
    person2.salary=707598.93;
    printf("\nPerson2 Age= %d",person2.age);
    printf("\nPerson2 salary= %f",person2.salary);



}
