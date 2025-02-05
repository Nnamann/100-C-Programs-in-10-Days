//Write a program to reverse an array with an auxiliary array.

#include<stdio.h>
int main()
{
    int n,i,j=0;
    printf("Enter the no. of elements in the array: ");
    scanf("%d",&n);
    int arr[n], aux[n];
    printf("Enter the elements of the array:\n");
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
    for(i=n-1;i>=0;i--)
      aux[j++]=arr[i];
    for(i=0;i<n;i++)
      arr[i]=aux[i];
    printf("\nREVERSED ARRAY:\n");
    for(i=0;i<n;i++)
      printf("%d ",arr[i]);
    return 0;
}