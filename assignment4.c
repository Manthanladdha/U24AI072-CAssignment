//farenheit to celsius conversion
#include<stdio.h>
int main(){
    int C,F;
    printf("Enter temperature in farenheit");
    scanf("%d",&F);
    C=(F-32)*5/9;
    printf("Temperature in celsius is %d",C);
}