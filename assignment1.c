// calculating simple interest
#include<stdio.h>
int main(){
    int P,R,T,SI;
    printf("Enter principal,rate per annum, time in years");
    scanf("%d %d %d",&P,&R,&T);
    SI = (P*R*T)/100;
    printf("Simple interest is %d",SI);
}