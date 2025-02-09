// A strong number is one where the sum of the factorial of its digits is equal to the number itself. Example: 145 (1! + 4! + 5! = 1 + 24 + 120 = 145).

#include<stdio.h>
int main()
{
    int num, n, sf=0,f=1, d;
    printf("Enter the number : ");
    scanf("%d",&num);
    n=num;
    while(n>0)
    {
        d=n%10;
        
        f=1;
        for(int i=1;i<=d;i++)
        {
            f=f*i;
        }
        
        sf+=f;
        n/=10;
    }
    if(num==sf)
    printf("%d is a strong number",num);
    else
    printf("%d is not a strong number",num);
    return 0;
}