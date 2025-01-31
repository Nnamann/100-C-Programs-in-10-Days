#include<stdio.h>
int main()
{
    int num,d1,d2,d3,d4,um=0;
    printf("Enter a four digit number: ");
    scanf("%d",&num);
    d1=num/1000;
    d2=(num-d1*1000)/100;
    d3=(num-d1*1000-d2*100)/10;
    d4=num-d1*1000-d2*100-d3*10;
    um=d1+d2+d3+d4;
    printf("Sum of the four digits of the given number=%d",um);
return 0;
}