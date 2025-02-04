#include<stdio.h>
int main()
{
    int n,l1,l2,i;
    printf("Enter the no of elements of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elemnts of the array:\n");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    if(arr[0]>arr[1])
    {
        l1=arr[0];
        l2=arr[1];
    }
    else
    {
        l1=arr[1];
        l2=arr[0];
    }
    for(i=2;i<n;i++)
    {
        if(l1<=arr[i])
        {
            l2=l1;
            l1=arr[i];
        }
        if(l2<arr[i] && arr[i]<l1)
        l2=arr[i];
    }
    printf("first largest= %d\n",l1);
    printf("Second largest= %d",l2);
return 0;
}