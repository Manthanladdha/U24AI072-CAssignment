// converting hr min and sec in seconds
#include<stdio.h>
int main(){
int h,m,s,t;
printf("Enter time in Hour minute and seconds");
scanf("%d%d%d",&h,&m,&s);
t= ((h*3600)+(m*60)+s);
printf("total seconds are %d",t);
return 0;
}