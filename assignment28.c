// program to check whether a number is armstrong or not 
#include<stdio.h>
int main()
{
 int num, temp, sum = 0, digit;
    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while (temp != 0) {
        digit = temp % 10; // to obtain each digit in entered number
        sum += digit * digit * digit;// to add cubes of all digit in number
        temp /= 10;// this ensures to remove the last digit of number
    }
    if (sum == num) {
        printf("%d is an Armstrong number\n", num);
    } else {
        printf("%d is not an Armstrong number\n", num);
    }

    return 0;

}