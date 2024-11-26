//printing right align pyramid for digits
#include<stdio.h>
int main(){
    int rows,i,j,k;
    //char character;
   // printf("Enter character you want to start with:");
    //scanf("%c",&character);
    
    printf("Enter number of rows:");
    scanf("%d",&rows);

    for(i=1;i<=rows;i++)
        {   
            for(k=rows;k>i;k--)
            {
                printf(" ");
            }

            for(j=1;j<=i;j++)
            {
                printf("%d",j);
            }
            
            printf("\n");
        }
      
return 0;
}