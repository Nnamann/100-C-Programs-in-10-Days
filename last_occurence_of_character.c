//Write a program to find the last occurrence of a particular character in a string

#include<stdio.h>
int main()
{
    char s[100],ch;
    int p=999;
    printf("Enter a string:\n");
    fgets(s,100,stdin);
    printf("Enter the character to look for: ");
    scanf("%c",&ch);
    for(int i=0;s[i]!='\0';i++)
    if(s[i]==ch)
    p=i;
    if(p==999)
    printf("'%c' doesn't exist in the given string",ch);
    else
    printf("The last occurence of '%c' is at index no.= %d",ch,p);
    return 0;
}