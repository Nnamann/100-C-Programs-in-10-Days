//Write a program to check if the given matrix is a magic square or not.
//A magic square matrix is a square matrix in which the sum of the elements in each row, each column, and both diagonals is the same constant, called the magic constant or magic sum.

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int m,n,i,j,sr=0,sc=0,s1=0,s2=0,x=0;
    printf("Enter the no. of rows and columns in matrix: ");
    scanf("%d %d",&m,&n);
    int a[m][n];
    if(m!=n)
    {
        printf("\nSquare Matrix not possible\nNot a MAGIC SQUARE.\n");
        exit(0);
    }
    printf("Enter the elements of matrix:\n");
    for(i=0;i<m;i++)
     for(j=0;j<n;j++)
      scanf("%d",&a[i][j]);
    
    for(i=0;i<n;i++)
    {
        s1+=a[i][i];                              //Sum of principal diagonal elements
        s2+=a[i][n-1-i];                          //Sum of non leading diagonal elements
    }
    if(s1!=s2)
    {
        printf("\nNot a MAGIC SQUARE.\n");
        exit(0); 
    }
    for(i=0;i<n;i++) 
    {   
        sr=sc=0;
        for(j=0;j<n;j++)
        {
            sr+=a[i][j];                          //Sum of row rlements
            sc+=a[j][i];                          //Sum of column elements
        }
        if(sr!=s1 && sc!=s1)
        {
            printf("\nNot a MAGIC SQUARE.\n");
            exit(0); 
        }
    }
    printf("\nThe given matrix is a MAGIC SQUARE!!!\n");
    return 0;
}