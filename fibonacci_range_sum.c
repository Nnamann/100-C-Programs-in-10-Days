#include<stdio.h>
int main()
{   
    int a=0,b=1,c,n,i,s=1;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    if(n==1)
    printf("Sum=0");
    if(n==2)
    printf("Sum=1");
    if(n>=3)
    {
    for(i=3;i<=n;i++)
    {
        c=a+b;
        
        s=s+c;
        a=b;
        b=c;
    }
    printf("The sum of the fibonacci series upto the given number=%d",s);
    }
}