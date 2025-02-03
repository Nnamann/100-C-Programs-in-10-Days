//Write a program to print the Fibonacci numbers that fall in the given range
#include<stdio.h>
int main()
{   
    int a=0,b=1,c,n,i,s=1;
    printf("Enter the range till which fibonacci numbers are to be printed:");
    scanf("%d2",&n);
    if(n>=1)
    printf("%d ",a);
    if(n>=2)
    printf("%d ",b);
    if(n>=3)
    {
    for(i=3;i<=n;i++)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
    }
    return 0;
}