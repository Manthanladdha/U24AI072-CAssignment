//transposing a matrix
#include<stdio.h>
int main()
{
    int arr[3][3];
    for(int i=0;i<3;i++)//loop to take input
    {
        for(int j=0;j<3;j++)
        {
            printf("enter element in row%d column%d:",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
int temp[3][3];//transpose matrix declared
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            temp[i][j]=arr[j][i];//store value in transposed matrix
        }
    }
    for(int i=0;i<3;i++)
    {
       for(int j=0;j<3;j++)
       {
        printf("%d ",temp[i][j]);//print transpose matrix
       }
       printf("\n");
    }
}