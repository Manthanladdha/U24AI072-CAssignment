// selection sort
#include <stdio.h>
int main()
{
    int num[5], i, j;
    int temp;               // to store smallest number
    for (i = 0; i < 5; i++) // to take input from user
    {
        printf("enter element%d:", i + 1);
        scanf("%d", &num[i]);
    }
    for (i = 0; i < 5; i++)
    {
        int minindex = i; // the first number entered is set as smallest reference any no. greater than that will be ignored during sorting
        for (int j = 1 + i; j < 5; j++)
        {
            if (num[minindex] > num[j]) // to find smallest number
            {
                minindex = j;
            }
        }
        if (i != minindex)
        {
            // this if loop is used to swap temp with smallest number as to complete sorting

            temp = num[i];
            num[i] = num[minindex];
            num[minindex] = temp;
        }
    }
    for (i = 0; i < 5; i++)
    {
        printf("%d ", num[i]);
    }
}