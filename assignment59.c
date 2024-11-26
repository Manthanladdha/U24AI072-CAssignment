//swapping values of two arrays
#include<stdio.h>
int main()

{
    int a[3],b[3],c[3];
    for(int i=0;i<3;i++)
    {
        printf("Enter element%d in array 1",i+1);
          scanf("%d",&a[i]);
        printf("Enter element%d in array 2",i+1);
          scanf("%d",&b[i]);
          c[i]=a[i];
          a[i]=b[i];
          b[i]=c[i];

    }
    for(int i=0;i<3;i++)
    {
      printf(" %d and %d \n",a[i],b[i]);
    }

}