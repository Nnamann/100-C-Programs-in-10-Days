//Write a program to multiply two matrices.


#include<stdio.h>
int main()
{
    int m1,n1,m2,n2,i,j,k;
    printf("Enter the no. of rows and columns in matrix1: ");
    scanf("%d %d",&m1,&n1);
    printf("\nEnter the no. of rows and columns in matrix2: ");
    scanf("%d %d",&m2,&n2);
    
    if(n1!=m2)
    printf("Matrix Multiplication not possible.\nInvalid order combination\n");
    else
    {   
    int a[m1][n1],b[m2][n2];
    
    printf("Enter the elements of matrix1:\n");                           //Matrices Input
    for(i=0;i<m1;i++)                                                     
     for(j=0;j<n1;j++)                                                    
      scanf("%d",&a[i][j]);                                               
    printf("Enter the elements of matrix2:\n");                           
    for(i=0;i<m2;i++)                                                     
     for(j=0;j<n2;j++)                                                
      scanf("%d",&b[i][j]);
    
        int c[m1][n2];                                                    //Resultant matrix's elements initialisation (for sum calculation)
        for(i=0;i<m1;i++)
        for(j=0;j<n2;j++)
        c[i][j]=0; 
        
        for(i=0;i<m1;i++)                                                 //Product matrix's elements calculation 
        for(j=0;j<n2;j++)
        for(k=0;k<n1;k++)                                                 //n1 or n2 doesn't matter, same thing it is
        c[i][j]+=a[i][k]*b[k][j];
        
        printf("\nPRODUCT OF MATRIX1 & MATRIX2:\n");                      //Result Display
        for(i=0;i<m1;i++)
        {
            for(j=0;j<n2;j++)         
            printf("%d ",c[i][j]);
            printf("\n");
        }              
    }
    return 0;
}