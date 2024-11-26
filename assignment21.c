//read two numbers and perform specific task using switch case
#include<stdio.h>
int main(){
    char op;
    float a,b,c;
    
    printf("enter operation to be performed");
 scanf("%c",&op);
   
    printf ("Enter value of operand 1 :");
    scanf("%f",&a);
    printf("Enter value of operand 2 :");
    scanf("%f",&b);
    
    
    switch (op) {
    case '+': c=a+b;
              printf("%f is the sum",c);
    break;
    case '-': c=a-b;
              printf("%f is the difference",c);
    break;
    case '*': c=a*b;
          printf("%f is the product",c);
    break;
    case '/': c=a/b;
          printf("%f is the quotient",c);
    break;
    default : printf("Invalid operation");
    }
    return 0;

}