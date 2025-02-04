#include<stdio.h>
int main()
{
    int a=10,b=70,c=-190;
    (a>b && a>c)?printf("a =%d is largest",a) : (b>c && b>a)? printf("b=%d is largest",b) : printf("c=%d is largest",c); 
    return 0;
}