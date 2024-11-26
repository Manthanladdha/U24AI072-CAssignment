// merging of two sorted arrays in single sorted array

#include <stdio.h>
int main()
{
    int arr1[5];
    int arr2[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter element%d array 1:", i + 1);
        scanf("%d", &arr1[i]);
    }
     
    for (int i = 0; i < 5 - 1; i++)
    {
        for (int j = 0; j < 5 - i; j++)
            if (arr1[j] > arr1[j + 1])
            {
                int temp;
                temp = arr1[j];
                arr1[j] = arr1[j + 1];
                arr1[j + 1] = temp;
            }
    }
    for (int j = 0; j < 5; j++) 
    {
        printf("%d ", arr1[j]);
    }

   for (int i = 0; i < 5; i++)
    {
        printf("Enter element%d array 2:", i + 1);
        scanf("%d", &arr2[i]);
    }

    for (int i = 0; i < 5 - 1; i++)
    {
        for (int j = 0; j < 5 - i; j++)
            if (arr2[j] > arr2[j + 1])
            {
                int temp;
                temp = arr2[j];
                arr2[j] = arr2[j + 1];
                arr2[j + 1] = temp;
            }
    }
    for (int j = 0; j < 5; j++) // this loop is to print output
    {
        printf("%d ", arr2[j]);
    }
}
