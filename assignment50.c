//left align alphabet pyramid with same alphabet in each row
#include<stdio.h>
int main(){
    int rows,i,j;
    char character='A';
    
    
    printf("Enter number of rows:");
    scanf("%d",&rows);

    for(i=0;i<rows;i++)
        {   
            
            for(j=0;j<=i;j++)
            {
                printf("%c",character+i);
            }
            
            printf("\n");
        }
      
return 0;
}