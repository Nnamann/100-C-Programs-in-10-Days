//Write a function to generate the nth Fibonacci term using recursion. Print first N Fibonacci terms using this function

#include<stdio.h>
int fibonacci(int x); 
int main()
{
    int i,n;
    printf("Enter the nth term till which fibonacci series is to be printed: ");
    scanf("%d",&n);
    if(n==0)
    printf("INVALID INPUT\n");
    else
    {
        for(int i=0;i<n;i++)
        printf("%d ", fibonacci(i));
    }
}    
int fibonacci(int x)
{
    if(x==0)
    return 0;          
    else if(x==1)
    return 1;
    else
    return fibonacci(x-1)+fibonacci(x-2);   
}



