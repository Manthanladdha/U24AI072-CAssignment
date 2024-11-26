//diff of two matrix
#include<stdio.h>
int main()
{
    int arr1[3][3],arr2[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("enter element in row%d column%d (for matrix 1):",i+1,j+1);//1st loop for input of 1st matrix
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

int diff[3][3]={0};//matrix to store diff matrix
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
           diff[i][j]=arr1[i][j]-arr2[i][j]; 
        }
    }
    
for(int i=0;i<3;i++)
    {
       for(int j=0;j<3;j++)
       {
        printf("%d ",diff[i][j]);
       }
       printf("\n");
    }
}