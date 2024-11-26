//read array and print sum of all elements of array
#include<stdio.h>
int main()
{
   int num[11],sum=0;
   for(int i=0;i<10;i++)
   {
    printf("Enter number%d:",i+1);
    scanf("%d",&num[i]);
    sum=sum+num[i];
   }
   printf("sum is %d",sum);

}