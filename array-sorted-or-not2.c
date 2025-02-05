//Write a program to check whether an array is sorted or not.
//Alternate method in part 1 (But personally this method is better)

#include<stdio.h>
int main()
{
    int n,i,x,y;
    x=y=0;
    printf("Enter the number of elements of the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n-1;i++)
    {
        if(arr[i]<=arr[i+1])
        x++;
        if(arr[i]>=arr[i+1])
        y++;
    }
    if(x==n-1||y==n-1)
    printf("The array is sorted");
    else
    printf("The array is not sorted");
    return 0;
}