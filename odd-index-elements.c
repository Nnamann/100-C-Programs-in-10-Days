#include<stdio.h>
int main()
{
    int n,i,s=0;
    printf("Enter the number of terms of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=1;i<n;i+=2)
    s+=arr[i];
    printf("Sum of odd index numbers= %d",s);
    return 0;
}