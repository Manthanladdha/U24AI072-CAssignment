//function to check vowels 
#include<stdio.h>
int vowel(char x)
{
    if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'||x=='A'||x=='E'||x=='I'||x=='O'||x=='U')
    {
        return 1;
    }
    else 
    return 0;
}
int main()
{   int x;
    printf("Enter a character:");
    scanf("%c",&x);
    vowel(x);
    if(vowel(x))
    {
        printf("Vowel is entered");
    }
    else
     printf("Entered character is not vowel");
}