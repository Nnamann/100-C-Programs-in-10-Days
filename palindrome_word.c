//Write a program to check if the given string is a palindrome or not.
//strcmp() is used for comparing two strings. if strcmp(s1,s2)==0 ,the strings are equal, else not equal.       (stricmp() is invalid in now newer compilers)
//!!! strcmp() is case sensitive!. Thus, we use strcasecmp().



#include<stdio.h>
#include<string.h>
int main()
{
    char s[30],rv[30];
    int i,l;
    printf("Enter a string:\n");
    scanf("%s",s);
    l=strlen(s);                        //scanf() is used here becuase only a single input was to be taken. Ofcourse, fgets() was valid too.
    for(i=0;s[i]!='\0';i++)
    rv[l-1-i]=s[i];
    if(strcasecmp(s,rv)==0)            
    printf("%s is palindrome\n",s);
    else
    printf("%s is not palindrome\n",s);
    return 0;
}