#include<stdio.h>
int main()
{
int num,i,p=0;
printf("Enter a number to check if prime or not: ");
scanf("%d",&num);
for(i=1;i<=num;i++)
{
    if(num%i==0)
p++;
}
if(p==2)
printf("%d is a prime number",num);
else
printf("%d is not a prime number",num);
return 0;
}