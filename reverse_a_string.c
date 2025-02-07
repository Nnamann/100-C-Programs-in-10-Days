//Write a program to reverse a string.

#include<stdio.h>
#include<string.h>
int main()
{
    char s[150],rv[150];
    int i,ls;
    printf("Enter a string to reverse it:\n");
    fgets(s,150,stdin);
    ls=strlen(s);
    if(s[ls-1]=='\n')
    ls--;
    for(i=0;s[i]!='\n'&&s[i]!='\0';i++)
    rv[ls-1-i]=s[i];
    printf("\n\nReversed string:\n%s\n",rv);
    return 0;
}