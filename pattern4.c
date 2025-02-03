#include<stdio.h>
int main()
{
    int a,b;
    a=-1,b=0;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(i%2==1)
            printf("%d ",a+=2);
            else 
            printf("%d ",b+=2);
        }
        printf("\n");
    }
    return 0;
}