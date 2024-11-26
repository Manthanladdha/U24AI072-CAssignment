//program to print sum of even and odd numbers to N
#include<stdio.h>
int main(){
  int e=0,o=0,N;
    
    printf("Enter value of N:");
    scanf("%d",&N);
    for( int i=0;i<=N;i++)
    {
      if (i%2==0)
        {
          e+=i;
        }
      else (o+=i);    
    }
    printf("sum of even numbers is:%d \n",e);
 printf("sum of odd numbers is:%d \n",o);

}