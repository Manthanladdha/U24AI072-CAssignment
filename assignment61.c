//bubble sort
#include<stdio.h>
int main(){
    int n;
    printf("Enter number of elements to sort:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)//this loop is to take input from users
    {
        printf("Enter element%d:",i+1);
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n-1;i++)//this loop is to go through all elements of array
    {
        for(int j=0;j<n-i;j++)//this loop is to swap the positions of the elements in the array
        /*(j<n-i) is used as a condition because i is the number of elements sorted. 
         hence we want loop to only work for unsorted elements */
        if(arr[j]>arr[j+1])
        {
            int temp;
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
   for(int j=0;j<n;j++)//this loop is to print output
   {
    printf("%d ",arr[j]);
   }

}