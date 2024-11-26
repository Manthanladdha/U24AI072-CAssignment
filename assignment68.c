//multiplication of matrix
#include<stdio.h>
int main()
{
    int arr1[3][3],arr2[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("enter element in row%d column%d (for matrix 1):",i+1,j+1);//loop to take input for matrix 1
            scanf("%d",&arr1[i][j]);
        }
    }

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("enter element in row%d column%d (for matrix 2):",i+1,j+1);//loop for taking input for matrux 2
            scanf("%d",&arr2[i][j]);
        }
    }
    int multi[3][3]={0};

    /*as we know multiplication is lil complicated we have to initialize 3 varible i,j,k 
    i is the column number of first matrix j is row number of second matrix and k is row 
    number and column number of 1st and 2nd matrix respectively which changes in every loop
    */

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            for(int k=0;k<3;k++)
            {
               multi[i][j]=arr1[i][k]*arr2[k][j]+multi[i][j];
            }
        }
    }
    for(int i=0;i<3;i++)
    {
       for(int j=0;j<3;j++)
       {
        printf("%d ",multi[i][j]);
       }
       printf("\n");
    }
}