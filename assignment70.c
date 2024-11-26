// counting occurence of particular element in an array
#include<stdio.h>
int main()
{
   int n;
   printf("Enter number of elements you want to enter in an aaray:");
   scanf("%d",&n);
   int arr[n];
   for(int i=0;i<n;i++)
   {
    printf("Enter element%d:",i+1);// take input in an array
    scanf("%d",&arr[i]);
   }
   int num;
   int count=0;
   printf("Enter element you want to search:");
   scanf("%d",&num);
   for(int i=0;i<n;i++)
{ 
    if(num==arr[i])
    {
        count++;// count increases if the entered number is present in array 
    }
}
printf("Entered element occurs %d time in array",count);

}
