//printing diamond with odd number of stars in each row
#include<stdio.h>
int main(){
    int i,j,k,rows;
    
    printf("Enter number of rows:");
    scanf("%d",&rows);
    
    for(i=0;i<rows;i++)
    {   for(k=rows;k>i;k--)
        {
             printf("  ");
        }
        for(j=0;j<i*2-1;j++)
        {
            printf(" *");
        }
        
             
        printf("\n");
    }

    for(i=rows;i>0;i--)
    {
       for(k=rows;k>i;k--)
        {
             printf("  ");
        }
        for(j=0;j<i*2-1;j++)
        {
            printf(" *");
        }
        printf("\n");
    }
    return 0;
}
