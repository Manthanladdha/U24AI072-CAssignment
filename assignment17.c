//PROGRAM TO READ THREE NOS. AND PRINT MAX USING LOGICAL OPERATOR
#include<stdio.h>
int main (){
    int a,b,c;
     printf("Enter a \n");
    scanf("%d",&a);
     printf("Enter b \n");
    scanf("%d",&b);
    printf("Enter c \n");
    scanf("%d",&c);
    if((a>b)&&(a>c))
    printf("a is max");
    else if((b>a)&&(b>c))
    printf("b is max");
    else if ((c>a)&&(c>b))
    printf("c is max");
return 0;
}