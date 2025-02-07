//Write a program to find the GCD of two numbers recursively

#include<stdio.h>
int GCD(int x, int y);
int main()
{   
    int n1,n2;
    printf("Enter two numbers:\n");
    scanf("%d %d",&n1,&n2);
    printf("GCD= %d",GCD(n1,n2));
    return 0;
}
int GCD(int x, int y)
{  int div;
    if(x%y==0)
    return y;
    else
    {
        div=GCD(x,y-1);
        return div;
    }
}