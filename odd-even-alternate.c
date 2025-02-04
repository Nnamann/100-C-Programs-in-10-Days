// Given an integer variable, write a program to determine if it’s even or odd without using the modulus operator.
#include<stdio.h>
int main()
{
    int n; double x;
    printf("Enter the number: ");
    scanf("%d",&n);
    x=n/2.0 - n/2;
    if(x==0.0)
    printf("%d is even",n);
    else 
    printf("%d is odd",n);
    return 0;
}