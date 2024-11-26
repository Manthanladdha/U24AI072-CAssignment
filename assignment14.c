//program to check whether the letter is upper case lower case digit or special symbol
#include<stdio.h>
int main(){
    char C;
    printf("Enter any character");
    scanf("%c",&C);
    if (C>=65&&C<=90)
    printf("UPPERCASE");
    else if (C>=97&&C<=122)
    printf("lowercase");
    else if(C>=48&&C<=57)
    printf("DIGIT");
    else 
    printf("Special Character");


}