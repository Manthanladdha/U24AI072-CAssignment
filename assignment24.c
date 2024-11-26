//find the value of Y arithmetic function
#include<stdio.h>
#include<math.h>
int main()
{
    int y,x,n;
    printf("Enter value of x: ");
    scanf("%d",&x);
    
    printf("Enter value of n: ");
    scanf("%d",&n);
    if (n==1)
    { y=x+1;
    printf("y is %d",y);
    }
    else if (n==2)
    { y=1+(x/n);
    printf("y is %d",y);
    }
    else if (n==3)
    { y=1+pow(x,n);
    printf("y is %d",y);
    }
    else if (n>3||n<1)
    { y=1+(n*x);
    printf("y is %d",y);
    }
    return 0;
}