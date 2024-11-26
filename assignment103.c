#include<stdio.h>
#define BIGGEST(x,y) ((x>y)?(x):((x==y)?(1):(y)))
void main()
{
    int num1,num2;
    printf("Enter number 1:");
    scanf("%d",&num1);
    printf("Enter number 2:");
    scanf("%d",&num2); 
    int largest=BIGGEST(num1,num2);

    if(largest==1)
    {
        printf("Both are equal");
    }
    else
    {
        printf("Largest number is %d",largest);
    } 
}