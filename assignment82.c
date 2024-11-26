//program to calculate nCr using function
#include<stdio.h>
int factorial(int N,int R)
{
    int Nf=1,Rf=1,diff=1,NCR;
   for(int i=1;i<=N;i++)
   {
    Nf=Nf*i;
   }
  
   for(int i=1;i<=R;i++)
   {
    Rf=Rf*i;
   }
  //  Rf=R;
   for(int i=1;i<=(N-R);i++)
   {
     diff*=i;
   }

   NCR=(Nf/(Rf*diff));
   return NCR;

}
int main()
{
  int N,R;
  printf("Give the following data to calculate nCr\n");
  printf("Enter value of n:");
  scanf("%d",&N);
  printf("Enter value of r:");
  scanf("%d",&R);
  factorial(N,R);
  printf("Factorial value is %d", factorial(N,R));

}