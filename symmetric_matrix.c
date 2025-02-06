//Write a program to find whether a given matrix is symmetric or not.

#include <stdio.h>
#include<stdlib.h>
int main() 
{
    int i,j,m,n,x=0;
    printf("Enter size of matrix (m x n): ");
    scanf("%d %d",&m,&n);
    int mx[m][n];
    printf("Enter the elements of the matrix:\n");
    for(i=0;i<m;i++)
     for(j=0;j<n;j++)
      scanf("%d",&mx[i][j]);
    if(m!=n)
    {
        printf("\nSquare Matrix not possible\nNot a SYMMETRIC MATRIX.\n");
        exit(0);
    }
    j=m-1;
    for(i=0;i<m;i++)
     if(mx[i][j]!=mx[j][i])
     {
     x=1;
     j--;
     }
    if(x==1)
    printf("\nNot a SYMMETRIC MATRIX\n");
    else
    printf("\nSYMMETRIC MATRIX\n");
    return 0;
}