//read marks and print division
#include<stdio.h>
int main(){
    int m,p,c,e,h,P;
    printf("Enter marks obtained in Maths \n");
    scanf("%d",&m);
    printf("Enter marks obtained in physics \n");
    scanf("%d",&p);
    printf("Enter marks obtained in chemistry \n");
    scanf("%d",&c);
    printf("Enter marks obtained in english \n");
    scanf("%d",&e);
    printf("Enter marks obtained in hindi \n");
    scanf("%d",&h);
    P=(m+p+c+h+e)/5;
    if (P>=60&&P<=100)
    printf("PASSED in First Division");
    else if (P>=50&&P<60)
    printf("PASSED in Second Division");
    else if (P>=40&&P<50)
    printf("PASSED in Third Division");
    else 
    printf("FAILED");
    return 0;
}

