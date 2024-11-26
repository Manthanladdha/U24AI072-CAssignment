//program to calculate gross salary
#include <stdio.h>
int main()
{ 
// program to calculate gross salary
// g = gross salary
// oa= other allowence
// bs= basic salary
float g,oa,bs;
printf("enter your basic salary and other allowances");
scanf("%f %f",&oa,&bs);
g=oa+bs;
printf( "your gross salary is %f",g);
return 0;
}