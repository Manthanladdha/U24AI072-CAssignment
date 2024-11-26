//program to print fibonacci series
#include<stdio.h>
int fibonacci(int N)
{
    int a=0,b=1,c=0,i;
   printf("Fibonacci series : ");
   for(i=1;i<=N;++i)
   {
    printf("%d,",a);
    c=a+b;
    a=b;
    b=c;
    }
}
int main()
{  int N;
    printf("Enter value of N:");
    scanf("%d",&N);
    fibonacci(N);
   return 0;
}