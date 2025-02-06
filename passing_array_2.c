// Passing 2D array using pointer 

#include<stdio.h>
void pass(int *p);
int main()
{
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    pass(a[0]);
    printf("\nModified 2D-Array:\n");
    
    for(int i=0;i<3;i++)
      for(int j=0;j<3;j++)
        printf("%d ",a[i][j]);
    return 0;
}
void pass(int *p)
{
    for(int i=0;i<9;i++)
    {
        printf("%d ",*p);
        
        *p+=10;
        p++;
    }
}