//Write a program to print the Nth the prime number.

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,n,c,p,prime;
    printf("Enter the value of nth term: ");
    scanf("%d",&n);
    i=2,c=0,p=1;
    if(n<=0)
    {    printf("Invalid Input");
         exit(0);
    }
    while(p<=n)   
    {
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            c++;
        }
        if(c==2)
        {
            p++;
            prime=i;
        }
        c=0;
        i++;
    }
    printf("The %dth prime number= %d",n,prime);
    return 0;
}

//the use of exit(0) is optional here. The same can be done with using if else condition. 
//exit(0) requires importing stdlib library  (#include<stdlib.h>), standard library.
//the initial value of P is set to 1 because if the value of N is set to 1, it will print the first prime number which is 2 and if the value of N is 0, then the while iteration will not run, and the code will return invalid input.