// program to swap two variable without using third variable
#include<stdio.h>
int main(){
int a,b;
printf("Enter a \n");
scanf("%d",&a);
printf("Enter b \n");
scanf("%d",&b);
a=a+b;// adding both to subtact each other seperately
b=a-b;//subtracting b from total to obtain a in b
a=a-b;// as b takes the value of a
printf("swapped numbers are %d and %d respectively",a,b);

}