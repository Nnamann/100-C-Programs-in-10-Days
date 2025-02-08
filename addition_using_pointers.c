//Write a program to access two integers using pointers and add them.

#include<stdio.h>
int main()
{
    int a=30, b=70;
    int *p1, *p2;
    p1=&a;
    p2=&b;
    printf("%d",*p1+*p2);
    printf("\n%p %p",p1,p2);     // %u format specifier is not appropriate for printing a ponter value(It might work on some compilers).THE CORRECT FOR,AT SPECIFIER FOR PRINTING A POINTER VARIABLE IS %p
    
    return 0;
}