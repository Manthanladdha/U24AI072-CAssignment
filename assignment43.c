//calculating commission of sales representative as per sales
#include<stdio.h>
int main()
{
  float sale,total;
  printf("Enter sale amount:");
  scanf("%f",&sale);

  if (sale<=500)
     { 
        printf("Your commission is Rs.%f",total=sale*5/100);
     }
  else if(sale>500&&sale<=2000)
     {
        printf("Your commission is Rs.%f",total=35+sale*10/100);
     }   
  else if(sale>2000&&sale<=5000)  
     {
        printf("Your commission is Rs.%f",total=185+sale*12/100);
     } 
  else if (sale>5000)  
     {
        printf("Your commission is Rs.%f",total=sale*12.5/100);
     } 
     return 0;
}