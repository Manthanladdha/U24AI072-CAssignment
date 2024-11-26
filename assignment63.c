//finding maximum and minimum value in matrix
#include<stdio.h>
int main()
{
    int arr[3][3];
    int max=-32768,min=32767;//initialize max and minimum
    for(int i=0;i<3;i++)// loop to take input
    {
        for(int j=0;j<3;j++)
        {
            printf("enter element in row%d column%d:",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)//loop to find maximum and minimum
        {
            if(arr[i][j]>max)
            {
                max=arr[i][j];
            }
            if(arr[i][j]<min)
            {
                min=arr[i][j];
            }
        }
    }

    printf("Maximum number is:%d and minimum number is:%d",max,min);


}