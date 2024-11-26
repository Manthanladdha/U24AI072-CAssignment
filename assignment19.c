//program to check upper case and lower case using condition
#include<stdio.h>
int main(){
char C,UPPER_CASE,Lower_case,cas;
printf("Enter any letter in upper or lower case \n");
scanf("%c",&C);
((C>='A'&&C<='Z')||(C>'a'&&C<='z'))?((C>='A'&&C<='Z')?printf("Upper case"):printf("Lower case")):(0);
return 0;


}