//to print ascii code of any charachter
#include<stdio.h>
int main(){
    char chr;
    printf("Enter any character");
    scanf("%c",&chr);
    printf("%d is the ASCII value of the entered character",chr);
    return 0;
}