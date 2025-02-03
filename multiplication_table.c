#include<stdio.h>
int main()
{
    int i,j,k,n;
    printf("Enter the number till which multiplication tables have to be printed: ");
    scanf("%d",&k);
    printf("Enter the number of terms to be calculated in each multiplaction table: ");
    scanf("%d",&n);
    printf("\n\n");
    for(i=1;i<=k;i++)
    {
        printf("MULTIPLICATION TABLE OF %d:\n",i);
        for(j=1;j<=n;j++)
        {
            printf("%d x %d = %d",i,j,i*j);
            printf("\n");
        }
            printf("\n\n");
    }
    return 0;
}