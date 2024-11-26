//program to check whether a number is prime or not
#include<stdio.h>
int main()

{
    int yes=1,i,num;
    printf("Enter a positive number(>1)");
    scanf("%d",&num);

    if(num<1)
    {
        printf("wrong input");
    }
    else
     {
        if(num==1)
        {
            printf("Not a prime number");
        }
        else{
            for(i=2;i<=num/2;i++)
             {
                if(num%i==0)
                {
                    yes=0;
                }
             }

        }
        if(yes)
        {
            printf("Entered number is prime");
        }
        else 
        printf("Entered number is not prime");
        
     }  
}