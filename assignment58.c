// two add sum of elements of two arrays and store in third array
#include<stdio.h>
int main()
{
   int num1[10],sum1=0,num2[10],sum2=0,sum;
   
   printf("Enter numbers for 1 array \n");
   for(int i=0;i<10;i++)
   {
    printf(" number%d:",i+1);
    scanf("%d",&num1[i]);
    sum1=sum1+num1[i];
   }
   printf("Enter numbers for 2 array \n");
   for(int i=0;i<10;i++)
   {
    printf("number%d:",i+1);
    scanf("%d",&num2[i]);
    sum2=sum2+num2[i];
   }
   sum=sum1+sum2;
   printf("Total sum is %d",sum);

}