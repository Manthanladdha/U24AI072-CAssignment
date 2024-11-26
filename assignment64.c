//printing sum of elements of rows
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
    int sum[]={0,0,0};//initialize sum array to store addition
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            
            sum[i]+=arr[i][j];
        }
    }
    for(int i=0;i<3;i++)
    {
        printf("Sum of elements of row%d is:%d \n",i+1,sum[i]);
    }
}