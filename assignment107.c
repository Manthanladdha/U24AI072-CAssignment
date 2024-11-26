#include<stdio.h>
int flip(int);
int flip(int num)
{
  int N;
  printf("Enter no. of digits you want to flip\nfor e.g. N=3, num=12345,new num=12543\nEnter number: ");
  scanf("%d",&N);
  int store[N];
  for(int i=0;i<N;i++)
  {
    store[i]=num%10;
    num/=10;
  }
   
  for(int i=0;i<N;i++)
  {
   num=num*10+store[i];
  }
  return num;
}
void main()
{   int num;
    printf("enter number you want to edit:");
    scanf("%d",&num);
    printf("New number is %d",flip(num));
}