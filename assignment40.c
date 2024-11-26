//READ NUMBERS TILL A NEGATIVE NUMBER IS ENTERED AND CALCULATE SUM OF A LIST OF NUMBERS READ
#include<stdio.h>
int main()
{
   int n,sum=0;

  while(1)
  {
    printf("Enter number:");
    scanf("%d",&n);
    if(n<0)
    {
        printf("Program terminated!!");
        break;
    }
    else{
        sum+=n;
    }
    
  }
  printf("\nsum of all entered number is:%d",sum);
}