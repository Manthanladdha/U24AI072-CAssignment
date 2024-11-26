//linear search
#include<stdio.h>
int main()
{
   int n;
   printf("Enter number of elements you want to enter in an aaray:");
   scanf("%d",&n);
   int arr[n];
   for(int i=0;i<n;i++)
   {
    printf("Enter element%d:",i+1);//take input in an array
    scanf("%d",&arr[i]);
   }
   int num;
   printf("Enter element you want to search:");
   scanf("%d",&num);
   for(int i=0;i<n;i++)
{ 
    if(num==arr[i])// to check the entered element
    {
        printf("Entered element is in above array at %d position",i+1);

    }
    
}

 
}
