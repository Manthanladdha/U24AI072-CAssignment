// number pyramid 1
//               121
//              12321
#include <stdio.h>
int main()
{
    int i, j, k, rows;
    printf("Enter number of rows:");
    scanf("%d", &rows);

    for (i = 1; i < rows; i++)
    {
        for (k = rows; k > i; k--)
        {
            printf(" ");
        }

        for (j = 1; j <= i * 2 - 1; j++)
        {
            if (j <= i)
            {
                printf("%d", j);
            }
        }
        for (j = i - 1; j >= 1; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}
