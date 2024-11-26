//print table of any number
#include<stdio.h>
int main(){
    int i=1,a;
printf("Enter the value ");
scanf("%d",&a);
while (i<=10)
{
 printf("%dx%d=%d \n",a,i,a*i);
 i++; 
}
return 0;
}