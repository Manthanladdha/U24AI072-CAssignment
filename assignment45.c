//guessing game
#include<stdio.h>
int main(){
    int a,num;
    a=6;
    for(int i=0;i<15;i++)
    {
       printf("Enter your guessed number:");
       scanf("%d",&num);
       if(a==num)
       {
        printf("CONGRATULATIONS!!You guessed right number");
        break;
       }
       else 
       printf("try again\n");
    }
}