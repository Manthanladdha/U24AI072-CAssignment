// printing left align alphabet pyramid
#include <stdio.h>
int main()
{
    int rows, i, j;
    char character = 'A';

    // printf("Enter character");
    // scanf("%c", &character);

    printf("Enter number of rows:");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++)
    {
        for (j = 0; j < i; j++)
        {
            printf("%c",character + j);
        }

        printf("\n");
    }

    return 0;
}