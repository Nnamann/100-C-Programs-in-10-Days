//Write a program to arrange the elements of an array in ascending order by a simple sorting method. (Selection sort)

#include<stdio.h>
int main()
{
    int n,i,j,min,temp;
    printf("Enter the no. of elements in the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[min]>arr[j])
            min=j;
        }
        if(min!=i)
        {
            temp=arr[i];
            arr[i]=arr[min];
            arr[min]=temp;
        }
    }
    printf("\nSORTED ARRAY:\n");
    for(i=0;i<n;i++)
    printf("%d ",arr[i]);
    return 0;
}
