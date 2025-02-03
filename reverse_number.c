#include<stdio.h>
int main()
{
    int n, rv=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    while(n>0)
    {
        rv=rv*10 + n%10;
        n=n/10;
    }
    printf("Revesre no.= %d",rv);
    return 0;
}