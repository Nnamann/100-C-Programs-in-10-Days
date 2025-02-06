//passing entire array at once


#include<stdio.h>
void pass(int p[3][3],int m,int j);
int main()
{
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    pass(a,3,3);
    printf("\nModified 2D-Array:\n");
    
    for(int i=0;i<3;i++)
      for(int j=0;j<3;j++)
        printf("%d ",a[i][j]);
    return 0;
}
void pass(int p[3][3],int m,int j)
{
    for(int i=0;i<3;i++)
      for(int j=0;j<3;j++)
      {
        printf("%d ",p[i][j]);
        p[i][j]-=10;
    }
}