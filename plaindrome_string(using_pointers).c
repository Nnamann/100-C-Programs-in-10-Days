//Write a program to check if the given string is a palindrome or not, using the string handling function.

#include<stdio.h> 
#include<string.h>
int palindrome(char *p,int l)
{
    char s[l],r[l];
    for(int i=0;i<l;i++)
    {
    s[i]=*p;
    r[l-i-1]=*p;
    p++;
    }
    if(strcasecmp(s,r)==0)
    return 0;
    else 
    return 1;
}
int main()
{
    char st[50];
    printf("Enter a string:\n");
    scanf("%s",st);
    if(palindrome(&st[0],strlen(st))==0)
    printf("\nPALINDROME");
    else
    printf("\nNOT A PALINDROME");
    return 0;
}
