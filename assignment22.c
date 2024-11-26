//program to find factorial using for loop
#include<stdio.h>
int main (){
    long a,f;
    printf("Enter a number to find its factorial \n");
    scanf("%ld",&a);
    f=1;
    for(int i=1;i<=a;i++)
    
    {
    
        f*=i;
    }       
        printf("%ld",f);
  return 0;
}