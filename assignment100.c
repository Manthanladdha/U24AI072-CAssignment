#include<stdio.h>
#include<stdlib.h>
struct students
{  int roll_no;
   char stu_name[50];
   int total_marks;
};
void main()
{
   FILE * fptr=NULL;
   int n;
   printf("information of how many student is to be stored:");
   scanf("%d",&n);
   struct students student[n];

   fptr=fopen("LNMIITSTUDENT.JAVA","w");
   if(fptr==NULL)
   {
    printf("Error opening file");
    exit(1);
   }
   for(int i=0;i<n;i++)
   {
    printf("Enter roll number of student%d:",i+1);
    scanf("%d",&student[i].roll_no);
    getchar();
    printf("Enter name of student%d:",i+1);
    scanf("%[^\n]s",student[i].stu_name);
    getchar();
    printf("Enter total marks of student%d:",i+1);
    scanf("%d",&student[i].total_marks);
    getchar();
   }
    fprintf(fptr, "Roll No.\tStudent Name\t\tTotal Marks\n");
    fprintf(fptr, "-------------------------------------------------\n");
    for (int i = 0; i < n; i++) {
        fprintf(fptr, "%-10d\t%-20s\t%d\n", student[i].roll_no, student[i].stu_name, student[i].total_marks);
    }
}