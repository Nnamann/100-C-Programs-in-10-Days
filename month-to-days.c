#include<stdio.h>
int main()
{
    int n;
    printf("Enter total no. of months: ");
    scanf("%d",&n);
    printf("Total no. of days= ");
    if(n==1)
    printf("31");
   else  if(n==2)
    printf("59");
   else  if(n==3)
    printf("90");
   else if(n==4)
    printf("120");
   else  if(n==5)
    printf("151");
   else  if(n==6)
    printf("181");
   else  if(n==7)
    printf("212");
   else   if(n==8)
    printf("243");
   else  if(n==9)
    printf("273");
   else  if(n==10)
    printf("304");
   else  if(n==11)
    printf("334");
   else  if(n==12)
    printf("365");
   else  if(n==0)
    printf("0");
    else 
    printf("Not valid");
    return 0;
}