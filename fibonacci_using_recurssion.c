//Write a function to generate the nth Fibonacci term using recursion. Print first N Fibonacci terms using this function

#include<stdio.h>
int fibonacci(int x); 
int a=0,b=1,f;              // Global variables used(Because if variables are declared under fibonacci function, would get reinitialised in every recursion iteration)
int main()
{
    int i,n;
    printf("Enter the nth term till which fibonacci series is to be printed: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    printf("%d ", fibonacci(i));
}
int fibonacci(int x)
{
    if(x==1)
    return 0;
    if(x==2)          // x=2 because first factorial is always 0, and if x =1, one more extra term will be addded.
    return 1;
    else
    {   
    f=a+b;
    a=b;
    b=f;
    fibonacci(x-1);  
    a=0;b=1;         // if we don't reinitailse these variables, the vaslues from the last iteration also then add up, leading to failuree of logic. IN RECURSSION THE STATEMENTS, IN BETWEEN THE, FUNCTION RECURSSION STATEMENT AND THE RETURN STATEMENT, EXECUTE ONLY ONCE(AT THE END OF RECURSSION).
    return f;
    }
}



