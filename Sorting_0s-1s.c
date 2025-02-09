#include<stdio.h>
int main()
{
int i, z=0,o=0,n;
again:
printf("Enter the number of elements to input(maximum allowed is 7):\n");
scanf("%d",&n);
int arr[n];
if(n>7)
{
printf("\nInvalid Input\n" );
goto again;
}
printf("Enter the inputs of O's and 1's (with spaces in between):\n");
for(i=0; i<n; i++) //input taken
scanf("%d",&arr[i]);
for (i=0; i<n; i++)
{if(arr[i]==0)
z++;
if(arr[i]==1)
o++;
}
printf("\nOUTPUT\n");

{
    for (int j=0;j<z;j++)
printf("0 ");
for (int j=0;j<o;j++)
printf("1 ");
}
return 0;
}
