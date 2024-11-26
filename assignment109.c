#include <stdio.h>
int main()
{
    int a;
    printf("Enter an initial number:");
    scanf("%d", &a);
    printf("Stored value initially:%d\n", a);
    int *ptr = &a;
    printf("Enter new value:");
    scanf("%d", ptr);
    printf("Modified value is:%d", a);
}