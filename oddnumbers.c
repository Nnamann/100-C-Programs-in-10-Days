#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        if(i%2==1)
        printf("%d\n",i);
    }
}