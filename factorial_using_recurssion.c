//Write a program to find the factorial of a number using a function.(USING RECURSSION)
#include<stdio.h>
int fact(int x);  
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("\n%d! = %d\n",num,fact(num));
 return 0;
}
    
    int fact(int x)
{   
    int f;
    if(x==0)
    return 1;
    else
    f=x * fact(x-1); 
    return f;
}