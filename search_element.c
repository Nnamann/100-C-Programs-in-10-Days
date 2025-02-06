//Write a program for searching for an element in the matrix and counting the number of occurrences of that element.


#include<stdio.h>
int main()
{   
    int m,n,i,j,s,c=0;
    printf("Enter the no. of rows and the number of columns of the matrix: ");
    scanf("%d %d",&m,&n);
    int mx[m][n];
    printf("Enter the elements of the matrix:\n");
    for(i=0;i<m;i++)
     for(j=0;j<n;j++)
      scanf("%d",&mx[i][j]);
    
    printf("Enter the element to look for: ");
    scanf("%d",&s);
    for(i=0;i<m;i++)
     for(j=0;j<n;j++)
      if(mx[i][j]==s)
       c++;
    
    if(c==0)
    printf("%d doesn't exist in the matrix",s);
    else
    printf("No. of occurences of %d in the matrix= %d",s,c);
    return 0;
}
