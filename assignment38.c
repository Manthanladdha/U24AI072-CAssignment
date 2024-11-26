//PROGRAM TO PRINT 1,4,9,16,25,………N
#include<stdio.h>
int main()
{ int num,a,i;
    printf("Enter a number:");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        a=i*i;
        if(a<=num)
        {
            printf("%d \n",a);
        }
    }

return 0;

}