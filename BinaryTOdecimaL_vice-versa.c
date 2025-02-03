#include<stdio.h>
#include<math.h>
int main()
{
    int d,n1,n2=0,i,c;
printf("To convert\nBinary to Decimal: Enter 1\nDecimal to Binary : Enter 2\n");
scanf("%d",&c);
printf("Enter the number: ");
scanf("%d",&n1);
if(c==1)
{   
    i=0;
    while(n1>0)
    {
        d=n1%10;
        n2=n2+d*pow(2,i);
        n1=n1/10;
        i++;
    }
    printf("Converted no. in Decimal= %d",n2);
}
else if(c==2)
{   
    i=1;
    while(n1>=1)
    {
      d=n1%2;
      n2=n2+d*i;
      n1/=2;
      i*=10;
    }
     printf("Converted no. in Binary= %d",n2);
}
return 0;
}