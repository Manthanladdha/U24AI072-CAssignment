//program to read three numbers and print max using conditional operators
#include<stdio.h>
int main (){
     int a,b,c,max;
     printf("Enter a \n");
    scanf("%d",&a);
     printf("Enter b \n");
    scanf("%d",&b);
    printf("Enter c \n");
    scanf("%d",&c);
     max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
     printf("Maximum is %d",max);
}