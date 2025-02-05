//Write a program to check whether an array is sorted or not.
//Alternate Method in part 2 (Personally the other method is better)

#include<stdio.h>
int main()
{
    int n,i,x=0;
    printf("Enter the number of elements of the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    if(arr[0]<=arr[n-1])
    {
        for(i=0;i<n-1;i++)
        {
        if(arr[i]<=arr[i+1])
        continue;
        else
        x=1;
        }
    }
    else
    {
        for(i=0;i<n-1;i++)
        if(arr[i]>=arr[i+1])
        continue;
        else
        x=1;
    }
    if(x==0)
    printf("The array is sorted");
    else
    printf("The array is not sorted");
    return 0;
}