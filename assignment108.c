// program for string functions
#include <stdio.h>
// copying one string to another
void fstrcpy(char str[100])
{
    char *cptr1 = NULL;
    char *cptr2 = NULL;
    char cpstr[100];
    cptr2 = cpstr;
    cptr1 = str;
    while (*cptr1 != '\0')
    {
        *cptr2 = *cptr1;
        cptr1++;
        cptr2++;
    }
    *cptr2 = '\0';
    printf("copied string: %s\n", cpstr);
}
// comparing a string
void fstrcmp(char str1[100], char str2[100])
{
    char *cptr1 = NULL;
    char *cptr2 = NULL;
    cptr1 = str1;
    cptr2 = str2;
    while (*cptr1 != '\0' || *cptr2 != '\0')
    {
        if (*cptr1 > *cptr2)
        {
            printf("String 1 is bigger.\n");
            return;
        }
        if (*cptr2 > *cptr1)
        {
            printf("String 2 is bigger.\n");
            return;
        }

        cptr1++;
        cptr2++;
    }
    printf("Both strings are same\n");
}
void revstr(char str[100])
{
    char revstring[100];
    char *cptr1 = NULL, *cptr2 = NULL;
    cptr1 = str;
    // cptr2=revstring;
    while (*cptr1 != '\0')
    {
        cptr1++;
    }
    cptr1--;
    cptr2 = revstring;
    while (cptr1 >= str)
    {
        *cptr2 = *cptr1;
        cptr1--;
        cptr2++;
    }
    *cptr2 = '\0';
    printf("reversed string is:%s\n", revstring);
}
void strcon(char str1[100], char str2[100])
{
    char *cptr1 = NULL;
    cptr1 = str1;
    while (*cptr1 != '\0')
    {
        cptr1++;
    }
    cptr1--;
    char* cptr2 =str2;
    while(*cptr2!='\0')
    {
        *cptr1=*cptr2;
        cptr1++;
        cptr2++;
    }
    
    *cptr1='\0';
    printf("%s\n", str1);
}
int main()
{
    int n;
    printf("Press a number to perform the corresponding function:\n");
    printf("0: To exit from program\n");
    printf("1: Copy a string to another\n");
    printf("2: Compare two strings\n");
    printf("3: Reverse a string\n");
    printf("4: concatenate a string\n");
    char str[100];
    char str1[100], str2[100];
    char revstring[100];
    while (n != 0)
    {
        printf("Your choice: ");
        scanf("%d", &n);
        getchar();
        switch (n)
        {
        case 1:
            printf("Enter a string to copy:\n");
            fgets(str, 100, stdin);
            fstrcpy(str);
            break;
        case 2:
            printf("Enter strings to compare:\nString1:");
            fgets(str1, 100, stdin);
            printf("String2:");
            fgets(str2, 100, stdin);
            fstrcmp(str1, str2);
            break;
        case 3:
            printf("Enter a string to reverse:");
            fgets(revstring, 100, stdin);
            revstr(revstring);
            break;
        case 4:
            printf("Enter 1st string:");
            fgets(str1, 100, stdin);
            printf("Enter 2nd string:");
            fgets(str2, 100, stdin);
            strcon(str1,str2);
            break;
        case 0:
            break;
        default:
            printf("Function not available");
        }
    }
}