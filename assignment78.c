//program to check if a number is armstrong or not using function
#include <stdio.h>
#include <math.h>
void armstrong(int num)
{
    int temp, digit, digits = 0, sum = 0;
    temp = num;
    while (temp != 0)
    {
        temp /= 10;
        digits++;
    }
    temp = num;
    while (temp != 0)
    {     
        digit = temp % 10;
        int power = 1;
        for(int i=0;i<digits;i++)
        {
            power*=digit;
        }
        sum += power;
        temp /= 10;
    }
    if (sum == num)
    {
        printf("Entered number is armstrong number");
    }
    else
        printf("Entered number is not armstrong");
}
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d", &num);
    armstrong(num);
    return 0;
}