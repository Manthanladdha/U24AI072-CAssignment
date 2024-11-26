//counting total number of positive,negative and zero elements
#include<stdio.h>
int main()
{
   int num[11],sum=0,positive=0,negative=0,zero=0;
   for(int i=0;i<10;i++)
   {
    printf("Enter number%d:",i+1);
    scanf("%d",&num[i]);
    if(num[i]<0)
    {
        negative+=1;
    }
    else if(num[i]>0)
    {
        positive+=1;
    }
    else if(num[i]==0)
    {
       zero+=1; 
    }

     
   }
   printf("total positive numbers are %d,total negative numbers are %d and total zero elements are %d",positive,negative,zero);

}