// function to check whether a number is even or not
#include<stdio.h>
int even(int a)
{
    if(a%2==0)
    {
        printf("%d is an even number",a);
    }
    else
    printf("%d is not an even number",a);

}
int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    even(a);
    return 0;
}