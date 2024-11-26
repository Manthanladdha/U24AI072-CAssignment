//READ A NUMBER N AND PRINT A SINGLE DIGIT ANSWER SHOWING SUM OF DIGIT OF N
#include<stdio.h>
int main()
{
    int num,sum=0,rem1,rem2,finalsum=0;
  printf("Enter a number:");
  scanf("%d",&num);
 while(num>0)
 {
   rem1=num%10;
   sum=sum+rem1;
   num=num/10;
 }
 while (sum > 9) {
      finalsum = 0;
      while (sum > 0) 
      {
          finalsum += sum % 10;
          sum /= 10;
      }
      sum = finalsum;
  }
  
  printf("The single digit sum of the number is %d\n",sum);
  
}
