#include<stdio.h>
int main()
{
    int s=0, x;
    printf("To solve:\nsin(x)= x-x^3+x^5-x^7\nEnter the value of x:");
    scanf("%d",&x);
    s= x - x*x*x + x*x*x*x*x - x*x*x*x*x*x*x;
    printf("\ns(x)=%d",s);
    return 0;
}