#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of elements in array:");
    scanf("%d",&n);
    
    int arr[n];
    for(int i=0;i<n;i++)//this loop is to take input
    {
        printf("Enter Element%d:",i+1);
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n/2;i++)//this loop is for the main logic of the code which reverses array
    //loop should run n/2 time so that all alements are swapped only one time
    {  
            
            int temp; 
            temp=arr[i];
            arr[i]=arr[n-i-1];//n-i-1 is used because array store numbers from 0 to n-1
            arr[n-i-1]=temp;
        
         
    }

   printf("Reversed array is :");
    for(int i=0;i<n;i++)// this loop is for final output
    {
        printf("%d ",arr[i]);
    }
}