#include<stdio.h>
int main()
{
    int a,b;
    a=50,b=20;
    a=a+b;
    b=a-b;
    a=a-b;
    printf("The interchanged value of a=%d & b=%d",a,b);
    return 0;
}