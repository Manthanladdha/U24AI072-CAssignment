//changing  seconds  into day hour and minutes
#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c,d,e,f;
    printf("Enter number of seconds : ");
    scanf("%d",&a);
    b=a/86400;
    c=a%86400;
    d=c/3600;
    e=c%3600;
    f=e/60;
    printf("%d days %d hours %d minutes",b,d,f);
}