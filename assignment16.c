// PROGRAM TO READ THREE NOS. AND PRINT MAX
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter a \n");
    scanf("%d",&a);
     printf("Enter b \n");
    scanf("%d",&b);
    printf("Enter c \n");
    scanf("%d",&c);
    if (a>b) {
        if(a>c)
        printf("a is max \n");
    }
    if (b>a)
   {
    if(b>c)
    printf(" b is max \n");
   }
   if (c>a)
   {
    if(c>b)
    printf(" c is max \n");
   }


}