//Write a program to print the subarray that lies between the two indexes.


#include<stdio.h>
int main()
{
    int n,i,j=0,a,b;
    printf("Enter the no. of elements in the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("Enter the starting and final index of the array, to create the subarray from elements in between: ");
    scanf("%d %d",&a,&b);
    int sbar[b-a-1];
    for(i=a+1;i<b;i++)
    sbar[j++]=arr[i];
    printf("\nSUBARRAY:\n");
    for(i=0;i<b-a-1;i++)
    printf("%d ",sbar[i]);
    return 0;
}