//Write a program to determine the length of a character string using a pointer.

#include<stdio.h>
int main()
{
    int l=0;
    char st[50];
    printf("Enter a string:\n");
    scanf("%s",st);
    char *p= st;                //Here st returns base value of string(array) st, i.e. the memmory location of first element of string 
    while(*p!='\0')             //*p represents each element of string st, one by one.
    {
        p++;
        l++;
    }
    printf("Length of %s =%d",st,l);
    return 0;
}