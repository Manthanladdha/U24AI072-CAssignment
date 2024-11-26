#include<stdio.h>
struct student
{
     char name[100];
     int roll_no;
     int marks;
};
void displaystudentinfo(struct student students[],int count)
{
    printf("Student with marks greater than 500 are:\n");
    for(int i=0;i<count;i++)
    {
        if(students[i].marks>500)
        {
            printf("Name:%s\nRoll Number:%d\nMarks:%d",students[i].name,students[i].roll_no,students[i].marks);
        }
    }
}
int main()
{
    int max_students=3;
    int n= max_students;
    struct student students[max_students];
    for(int i=0;i<n;i++)
    {
        printf("Enter name of student%d:",i+1);
        fgets(students[i].name,sizeof(students[i].name),stdin);
        fflush(stdin);
        // scanf("%s",students[i].name);
        printf("Enter roll number of student:");
        scanf("%d",&students[i].roll_no);
        printf("Enter marks obtained:");
        scanf("%d",&students[i].marks);
        printf("\n");
    }
    displaystudentinfo(students,n);
    return 0;
}