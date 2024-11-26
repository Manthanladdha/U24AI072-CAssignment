#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    FILE *fptr = NULL;
    char str[1000];
    int chars=0,lines=0,words=0;
    fptr = fopen("testfile.txt", "r");
    if(fptr==NULL)
    {
        printf("Error opening file");
        exit(1);
    }
    while( fgets(str,sizeof(str),fptr)!=NULL)//read each line
    {      char * cptr=str;
        while(*cptr!='\0')
        {   chars++;
            if(*cptr==' '||*cptr=='\n'||*cptr=='\t')
            {
              words++;
            }
            if(*cptr=='\n')
            {
                lines++;
            }
           cptr++;  
        }
       
     
    }
    fclose(fptr);
    printf("Total number of character,words and lines are %d %d %d ",chars,words,lines);
}