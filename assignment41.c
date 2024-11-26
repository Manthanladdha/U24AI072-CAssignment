// READ A NUMBER N AND PRINT FACTOR OF N
#include<stdio.h>
int main()
{
    int num,a,i;
    printf("Enter a number:");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
       if(num%i==0) 
       {
        printf("%d \n",i);
       }
        
    }

return 0;

}