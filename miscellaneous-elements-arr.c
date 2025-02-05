//Write a program to find the number of positive numbers, negative numbers, odd numbers,even numbers, and the number of 0 of an array.

#include<stdio.h>
int main()
{ 
    int a,i,p,n,o,e,z;
    p=n=o=e=z=0;
    printf("Enter the no. of terms in array: ");
    scanf("%d",&a);
    int arr[a];
    printf("Enter the elements of the array:\n");
    for(i=0;i<a;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<a;i++)
    {
        if(arr[i]%2==0)
        e++;
        else
        o++;
        if(arr[i]>0)
        p++;
        if(arr[i]<0)
        n++;
        if(arr[i]==0)
        z++;
    }
    printf("NUMBER OF SPECIFIED ELEMENTS:\nEven= %d\nOdd= %d\nPositive= %d\nNegative= %d\nZero= %d",e,o,p,n,z);
    return 0;
}