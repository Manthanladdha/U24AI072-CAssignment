// program to interchange value of two variables
#include<stdio.h>
int exchange(int x, int y)
{
    int z;
    z=x;
    x=y;
    y=z;
    printf("x and y are %d and %d respectively",x,y);
    return 0;
}
int main()
{
   int x,y;
   printf ("Enter x:\n");
   scanf("%d",&x);
    printf ("Enter y:\n");
   scanf("%d",&y);
   exchange(x,y);
}