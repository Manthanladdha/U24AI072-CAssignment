//program to print sum of individual digits of N digit no.
#include<stdio.h>
int main()
{ int num,sum=0,rem;
    printf("Enter a number:");
    scanf("%d",&num);
   while(num>0)
   {
     rem=num%10;
     sum+=rem;
     num/=10;
     
    }
    printf("%d is sum of all digits",sum);

}