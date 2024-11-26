// PROGRAM TO FINDOUT MAX AND SECOND MAX FROM ‘N’ NOS .
#include <stdio.h>

int main()
{
  int i, N, max, secondmax, temp;
  printf("Enter how many number you want to check: ");
  scanf("%d", &N);
  max = -32768;
  secondmax = -32768;

  for (i = 0; i < N; i++)
  {
    printf("enter number %d: ", i + 1);
    scanf("%d", &temp);
    if (temp > max)
    {
      secondmax = max;
      max = temp;
    }
    else if (temp > secondmax && temp < max)
    {
      secondmax = temp;
    }
  }
  printf("Maximum number is : %d \n", max);
  printf("Second maximum number is: %d \n", secondmax);
  return 0;
}
