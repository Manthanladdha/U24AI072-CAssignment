//function to read array and find maximum
#include<stdio.h>

int maximum(int arr[],int size )
{   int max;
    max=arr[0];
      for(int i=0;i<size;i++)
      {
        if(max<arr[i])
        {
            max=arr[i];
        }
      }
    return max; 
}
int main()
{ int size=0;  
  int arr[size];
    printf("Enter number of element in an array:");
    scanf("%d",&size);
    for(int i=0;i<size;i++)
    {
      printf("Enter element%d:",i+1);
      scanf("%d",&arr[i]);
    }
   printf("Maximum number in an array is: %d",maximum(arr,size));
    return 0;
    
}