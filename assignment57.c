// to find maximum and second maximum from n numbers
#include<stdio.h>
int main()
{
  int n,max=-32768,second_max=-32768;
  
  printf("Enter number of elements you want to enter:");
  scanf("%d",&n);
  int num[n];
  for(int i=1;i<=n;i++)
  {
    printf("Enter element%d:",i);
    scanf("%d",&num[i]);
    if(num[i]>max)
    {
       second_max=max;
        max=num[i];
    }
    else if (num[i]>second_max&&num[i]<max)
     {
        second_max=num[i];
     } 
  }
  printf("Maximum and second maximum value are %d and %d respectively",max,second_max);

}