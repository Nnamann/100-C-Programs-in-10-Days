//Write a program to check whether the given number is prime or not. Using this function generates first n prime numbers using the above function.

#include<stdio.h>
#include<stdlib.h>
int isprime(int n);
int main()
{
    int num,a=1,j=2;
    printf("Enter the nth term till prime numbers are to be printed: ");
    scanf("%d",&num);
    if(num<=0)
    printf("INVALID INPUT");
    exit(0);
     while(num>=a)
    {
         if(isprime(j)==0)                      //Passes the value to be checked to isprime, if it is aprime no. it returns 0, Thus the no. is printed.
    {
        printf("%d ",j);
        a++;
    } 
    j++;
    }
}
int isprime(int n)                              //Checks whether the given integer is a prime number or not
{   
    int c=0;
    for(int i=1;i<=n;i++)
    if(n%i==0)
    c++;
    if(c==2)
    return 0;
    else
    return 1;
}
