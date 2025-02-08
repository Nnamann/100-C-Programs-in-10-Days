//Write a program to compute the sum of all elements stored in an array using a pointer.

#include<stdio.h>
int main()
{
    int n,i,s=0;
    printf("Enter the no. of elements of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array:\n");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    
    int *p=arr;
    for(i=0;i<n;i++)
    {
        s+=*p;
        p++;
    }
    printf("Sum of all elements of the array= %d",s);
    return 0;
}