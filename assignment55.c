// counting total number of odd element in array
#include<stdio.h>
int main()
{
   int num[11],sum=0,count=0;
   for(int i=0;i<11;i++)
   {
    printf("Enter number%d:",i+1);
    scanf("%d",&num[i]);
    sum=sum+num[i];
      if(num[i]%2!=0)
      {
        count+=1;
      }

     
   }
   printf("total odd numbers are %d and total sum is %d",count,sum);

}