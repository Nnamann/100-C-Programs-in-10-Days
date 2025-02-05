//Write a program to take an array of 10 elements. Split it into the middle and store the elements in two different arrays

#include<stdio.h>
int main()
{
    int i,arr[10],a1[5],a2[5];
    printf("Enter the 10 elements of the array:\n");
    for(i=0;i<10;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<5;i++)
    {
        a1[i]=arr[i];
        a2[i]=arr[i+5];
    }
    printf("\nSplitted Arrays:\nArray 1: ");
    for(i=0;i<5;i++)
    printf("%d ",a1[i]);
    printf("\nArray 2: ");
    for(i=0;i<5;i++)
    printf("%d ",a2[i]);
    return 0;
}
    