//program to calculate power without using <math.h>
#include<stdio.h>
int main(){
    int exponent;
    float base,result=1;
    printf("enter your base number \n");
    scanf("%f",&base);

    printf("enter value of exponent \n");
    scanf("%d",&exponent);
    for (int i=1;i<=exponent;i++)
    {
        result=result*base;
    }
    printf("%f is answer",result);
    }