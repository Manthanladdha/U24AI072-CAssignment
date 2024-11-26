//PROGRAM TO PRINT FIBONACCI SERIES.(0,1,1,2,3…)
#include<stdio.h>
int main()
{
   int n,a=0,b=1,c=0,i;
   printf("enter a number of terms in fibonacci series :\n");
   scanf("%d",&n);
   printf("Fibonacci series : ");
   for(i=1;i<=n;++i)
   {
    printf("%d,",a);
    c=a+b;
    a=b;
    b=c;
    }

}