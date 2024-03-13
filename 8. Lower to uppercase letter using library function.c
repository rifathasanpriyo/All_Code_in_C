#include<stdio.h>
int main()
{
    char lower,upper;
    printf("Enter a lower case number= ");
    scanf("%c",&lower);
    upper= toupper(lower);
    printf("The Upper case is= %c",upper);


    }
