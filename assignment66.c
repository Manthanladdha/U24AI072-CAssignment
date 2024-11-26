//sum of two matrix
#include<stdio.h>
int main()
{
    int arr1[3][3],arr2[3][3];
    for(int i=0;i<3;i++)//1 loop to take input for 1st matrix
    {
        for(int j=0;j<3;j++)
        {
            printf("enter element in row%d column%d (for matrix 1):",i+1,j+1);
            scanf("%d",&arr1[i][j]);
        }
    }

    for(int i=0;i<3;i++)//2nd loop for input of 2nd matrix
    {
        for(int j=0;j<3;j++)
        {
            printf("enter element in row%d column%d (for matrix 2):",i+1,j+1);
            scanf("%d",&arr2[i][j]);
        }
    }

int sum[3][3]={0};
    for(int i=0;i<3;i++)//adding both matrix and store in another matrix
    {
        for(int j=0;j<3;j++)
        {
           sum[i][j]=arr1[i][j]+arr2[i][j]; 
        }
    }
    
for(int i=0;i<3;i++)
    {
       for(int j=0;j<3;j++)
       {
        printf("%d ",sum[i][j]);
       }
       printf("\n");
    }
}