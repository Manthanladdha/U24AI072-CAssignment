// function to check whether a number is palindrome or not
#include <stdio.h>
int palindrome(int num)
{
    int temp;
    int rev = 0, rem;
    temp = num;
    while (temp != 0)
    {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp /= 10;
    }
    if (rev == num)
    {
        printf("Entered number is palindrome");
    }
    else
        printf("Entered number is not palindrome");
}
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d", &num);
    palindrome(num);
    return 0;
}