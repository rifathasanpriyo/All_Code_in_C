#include<stdio.h>
int main()
{
    char ch;
    printf("Enter Chearter= ");
    scanf("%c",&ch);
    switch(ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'u':
    case 'o':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':

        printf("Vowel");
        break;

    default:
       printf("Consonete");


    }





}
