// examination result of 10 students
#include <stdio.h>
int main()
{
  int studentmarks[10][3];
  for (int i = 0; i < 10; i++)
  {
    for (int j = 0; j < 3; j++) // this loop is to take input of marks for each subject of each student
    {
      printf("Enter marks for student %d in subject%d:", i + 1, j + 1);
      scanf("%d", &studentmarks[i][j]);
    }
  }
  // question(1) to read and show sum of total marks obtained by each student
  int sum[10] = {0};
  for (int i = 0; i < 10; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      sum[i] = sum[i] + studentmarks[i][j]; // to calculate sum of marks obtained by each student
    }
  }
  for (int i = 0; i < 10; i++)
  {
    printf("Sum of marks of student%d is:%d\n", i + 1, sum[i]);
  }

  /*question(2)highest marks in each subject with his roll no.*/
  int max1 = 0, max2 = 0, max3 = 0;

  for (int j = 0; j < 10; j++)
  {
    if (max1 < studentmarks[j][0])
    {
      max1 = studentmarks[j][0];
    }
    if (max2 < studentmarks[j][1])
    {
      max2 = studentmarks[j][1];
    }
    if (max3 < studentmarks[j][2])
    {
      max3 = studentmarks[j][2];
    }
  }
  for (int j = 0; j < 10; j++)
  {
    if (max1 == studentmarks[j][0])
    {
      printf("Highest marks in subject 1 are %d by roll number %d \n", max1, j + 1);
    }
    if (max2 == studentmarks[j][1])
    {
      printf("Highest marks in subject 2 are %d by roll number %d \n", max2, j + 1);
    }
    if (max3 == studentmarks[j][2])
    {
      printf("Highest marks in subject 3 are %d by roll number %d \n", max3, j + 1);
    }
  }

  // question(3)student with highest marks
  int highest_marks = 0;
  int i;
  for (i = 0; i < 10; i++)
  {
    if (sum[i] > highest_marks)
    {
      highest_marks = sum[i];
    }
  }

  for (int i = 0; i < 10; i++)
  {

    if (sum[i] == highest_marks)
    {
      printf("Highest marks are %d by roll number %d \n", highest_marks, i + 1);
    }
  }
}
