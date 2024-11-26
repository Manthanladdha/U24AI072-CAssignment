//tabular pattern with 1 printed at the number of row
#include<stdio.h>
int main(){
    int rows,i,j,k;
   
    
    printf("Enter number of rows:");
    scanf("%d",&rows);

    for(i=1;i<=rows;i++)
        {
            for(j=1;j<=i;j++)
            {
                if(i==j)
                {
                    printf("1");
                }
                else 
                printf("0");
            }

            for(k=rows;k>i;k--)
            {
                printf("0");
            }
            
            printf("\n");
        }
      
return 0;
}