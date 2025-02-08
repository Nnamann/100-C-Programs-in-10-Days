//Write a program to find out the greatest and the smallest among the three numbers using pointers.

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers:\n");
    scanf("%d %d %d",&a,&b,&c);
    int *p1=&a, *p2=&b, *p3=&c;
    (*p1>*p2 && *p1>*p2)?(printf("%d is greatest",*p1)):(*p2>*p1 && *p2>*p3)?(printf("%d is greatest",*p2)):(printf("%d is greatest",*p3));
    printf("\n");
    (*p1<*p2 && *p1<*p2)?(printf("%d is smallest",*p1)):(*p2<*p1 && *p2<*p3)?(printf("%d is smallest",*p2)):(printf("%d is smallest",*p3));
    return 0;
}