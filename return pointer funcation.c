  #include<stdio.h>

 float point(int *ar,int size)//CREATE FUNCATION
{
int i,sum=0;
float *aver;
for(i=0; i<size; i++)
{
    sum=sum+*ar;
    ar++;

}
float aver2=(float)sum/size ;
aver=&aver2;
return *aver;
 }

int main()//MAIN FUNCATION
{
int  a[]= {2,4,6,8,10,11};
int size=sizeof(a)/sizeof(a[0]);
float aner=point(a,size);

printf("%f",aner);

return 0;
}
