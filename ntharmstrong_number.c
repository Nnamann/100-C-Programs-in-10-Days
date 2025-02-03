//Write a program to print the Nth the Armstrong number.

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,a,arm,x,y,d,s=0;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    x=1;a=0;
    if(n==1)
    {
        printf("1st armstrong number = 0");
        exit(0);
    }
    if(n<=0)
    {
        printf("Invalid Input");
        exit(0);
    }
    a=1;
    while(a!=n)
    {
        y=x;
        while(y>0)
        {
            d=y%10;
            s+=d*d*d;
            y/=10;
        }
        if(s==x)
        {
            a++;
            arm=x;
        }
        s=0;
        x++;
    }
    printf("%dth armstrong number = %d",n,arm);
}


//the use of exit(0) is optional here. The same can be done with using if else condition. 
//exit(0) requires importing stdlib library  (#include<stdlib.h>), standard library.
//the initial value of a is set to 2, because The first Armstrong number is zero, and when zero will be checked in the while loop, the loop is not going to run. Therefore when value of N is 1, then the while iteration will not run, and the code will directly return 0 is the first armstrong number.