#include<stdio.h>
int main()
{
    int num, n, s=0, d;
    printf("Enter the number : ");
    scanf("%d",&num);
    n=num;
    while(n>0)
    {
        d=n%10;
        s+=d*d*d;
        n/=10;
    }
    if(num==s)
    printf("%d is an armstrong number",num);
    else
    printf("%d is not an armstrong number",num);
    return 0;
}