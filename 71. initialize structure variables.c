#include<stdio.h>

struct friends
{
    int roll;
    float due;
};
int main()
{
    struct friends nazmul={346,100.6},tajrian={385,234.2},zisan={321,776.9};

    printf("Nazmul\nROLL:%d\nDUE:%f",nazmul.roll,nazmul.due);

    printf("\nTajrian\nROLL:%d\nDUE:%f",tajrian.roll,tajrian.due);
    printf("\nZisan\nROLL:%d\nDUE:%f",zisan.roll,zisan.due);


}
