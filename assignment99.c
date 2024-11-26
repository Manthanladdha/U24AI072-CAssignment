#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    FILE *fptr = NULL;
    char str[100];
    int totalvowelcount=0;
    fptr = fopen("vowels.txt", "r");
    if(fptr==NULL)
    {
        printf("Error opening file");
        exit(1);
    }
    while(fgets(str,sizeof(str),fptr)!=NULL)
    {
        int vowelcount=0;
        char * cptr=str;
        while(*cptr!='\0')
        {   char c=*cptr;
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
             {
                vowelcount++;
             } 
             cptr++  ;

        }
        printf("vowel count in line:%d\n",vowelcount);
        totalvowelcount+=vowelcount;
    }
    fclose(fptr);
    printf("Total vowels in file are:%d\n",totalvowelcount);
    return 0;
}