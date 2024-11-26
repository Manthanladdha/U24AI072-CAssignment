//PROGRAM TO PRINT 1/1!+2/2!+3/3!+4/4!,………N.
#include<stdio.h>
int main()
{
       float N,fac,i,sum=0;
   printf("Enter a number: \n");
   scanf("%f",&N);
   fac=1;
   for(i=1;i<=N;i++)
   
   {
   
       fac=fac*i;
       sum=sum+i/fac;
       

   }
   printf("%f is the answer",sum);   
       
    
}