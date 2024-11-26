//function to read line of text and find length of string
#include<stdio.h>
void string(void);
void string(void)
{  char string[100];
   printf("Enter statement:\n");
   fgets(string,100,stdin);

    int i=0,count=0;
    
   while(string[i]!='\n')
   {
    count++;
    i++;
   }
   printf("string length is %d",count);
}
int main()
{  
   string();
   return 0;
}