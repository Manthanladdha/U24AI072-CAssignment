//program to reverse a given no.
#include<stdio.h>
int main()
{
    int num,rem,rev=0;
    printf("Enter a number:");
    scanf("%d",&num);
    while(num!=0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num/=10;
    }

    printf("reversed number is %d",rev);
    return 0;
    
}