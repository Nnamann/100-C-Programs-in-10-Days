// Passing a 2D array using pointer and creating an array of pointers 

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
    int *x[9];
    for(int i=0;i<9;i++)
    {
        printf("%d ",*p);
        x[i]=p;
        *p+=10;                //Basically these access the same memory location
        p++;
        *x[i]-=10;             //The same thing as stated above
    }
}