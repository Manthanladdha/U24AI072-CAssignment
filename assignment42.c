// READ A NUMBER N AND PRINT IF N IS PRIME OR COMPOSITE
#include<stdio.h>
int main()
{
   int yes,i,num;
printf("Enter a positive number");
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
        printf("Entered number is prime number");
    }
    else 
    printf("Entered number is composite number");
    
 }   
}