//PROGRAM TO FINDOUT MAX AND MIN FROM ‘N’ NOS
#include<stdio.h>
int main()
{
    int max,min,temp,num,i;
    printf("Enter how many numbers you want to check:");
    scanf("%d",&num);
    printf("Enter number 1: ");
    scanf("%d", &temp);

    max = temp;
    min = temp;

    for (i = 1; i < num; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &temp);

        if (temp > max) {
            max = temp;
        }
        if (temp < min) {
            min = temp;
        }
    }

    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);

}
