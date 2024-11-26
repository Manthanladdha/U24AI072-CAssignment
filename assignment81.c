//program to check whether a number is prime or not using function
#include <stdio.h>
int prime(int num)
{
  if(num==0||num==1)
  {
    return 0;
  }
  else if(num>=2)
  {
    for(int i =2;i<num;i++)
    {
        if(num%i==0)
        {
          return 0;
        }
    }
  }
  else {return 1;}
  
}
int main()
{
  int num;
  printf("Enter a number:");
  scanf("%d",&num);
  prime(num);
if(prime(num))
{
  printf("Entered number is prime number");
}
else
printf("Entered number is not prime");


}