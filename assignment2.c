// calculating total and percentage of student in 5 subjects
#include<stdio.h>
int main(){
    int M,H,E,P,C,T,Per;
    printf("Enter your marks in Maths,Hindi,English,Physics,Chemistry out of 100");
    scanf("%d %d %d %d %d",&M,&H,&E,&P,&C);
    T= M+H+E+P+C;
    Per=T/5;
    printf("Student got total of %d marks out of 500 and percentage of %d out of 100",T,Per);
}