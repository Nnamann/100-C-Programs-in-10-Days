//Write a program to find the largest and smallest element in an array.

#include<stdio.h>
int main()
{ 
    int n,i,s,l;
    printf("Enter the no. of terms in array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    s=arr[0];
    l=arr[0];
    for(i=0;i<n;i++)
    {
        if(s>arr[i])
        s=arr[i];
        if(l<arr[i])
        l=arr[i];
    }
    printf("Largest Element = %d\nSmallest Element = %d",l,s);
    return 0;
}