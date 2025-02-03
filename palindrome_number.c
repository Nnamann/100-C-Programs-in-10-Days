#include<stdio.h>
int main()
{
    int n,num, rv=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    n=num;
    while(n>0)
    {
        rv=rv*10 + n%10;
        n=n/10;
    }
    if(num==rv)
    printf("%d is palindrome",num);
    else
    printf("%d is not a palindrome",num);
    return 0;
}