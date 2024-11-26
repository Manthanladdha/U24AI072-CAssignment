//program to print odd numbers
#include<stdio.h>
int main()
{
    int i,N;
    printf("enter a number: \n");
    scanf("%d",&N);
    for(i=0;i<=N;i++)
    {
       if(i%2!=0)
       {
        printf("%d \n",i);
       }
    }
}