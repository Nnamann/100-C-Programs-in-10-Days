//Write a program to find the substring of a given string.

#include<stdio.h>
int main()
{
    char st[151],sb[151];
    int i,p,l,a=0;
    printf("Enter the string:\n");
    fgets(st,151,stdin);
    printf("Enter the starting position (index nmber) of the substring: ");
    scanf("%d",&p);
    printf("Enter the length of the sub string: ");
    scanf("%d",&l);
    for(i=p;i<p+l;i++)
    sb[a++]=st[i];
    printf("SUBSTRING:\n%s",sb);
    return 0;
}