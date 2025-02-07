//Write a program to find the maximum of a given set of numbers using functions. (Use a function Max and return the result to the main function)
// Can be done simply by taking the input and comparison both in the same max function.

#include<stdio.h>
int max(int *po, int n)             //po reprsents memory location(pointer) of 1st element of array 
{
    int mx=*po;                    // max = becomes first element of arr[]
    for(int i=0;i<n;i++)
    {
        if(mx<=*po)
        mx=*po;
        po++;                      // po now stores memory location of next element of array
    }
    return mx;
}
int main()
{
    int n,mx;
    printf("Enter the number of elements to input: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the numbers:\n");
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);          
    printf("Maximum= %d\n",max(&arr[0],n));                        // memory location of first element of array has been transferred
    return 0;
}
