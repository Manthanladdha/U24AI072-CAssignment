// program to check whether a no. is palindrome or not 
#include<stdio.h>
int main()
{
    int num,rev=0,rem,temp;
    printf("Enter a number:");
    scanf("%d",&num);
    temp=num;
  while(temp!=0)
  {
    rem=temp%10;
    rev=rev*10+rem;
    temp/=10;
  }
  if(num==rev)
  {
    printf("Entered number is palindrome number");
  }
  else{
    printf("Entered number is not palindrome");
  }




}