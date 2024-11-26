//PROGRAM TO FINDOUT MAX AND MIN FROM ‘N’ NOS
#include<stdio.h>
int main()
{
    int max,min,temp,num,i;
    printf("Enter how many numbers you want to check:");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        printf("Enter number %d: ",i+1);
        scanf("%d",&temp);
        max=-32768;
        min=32767;
        if(temp>max)
        {
            max=temp;
        }
        if(temp<max)
        {
            min=temp;
        }

    }
     printf("maximum: %d\n",max);
     printf("minimum:%d ",min);
return 0;
}