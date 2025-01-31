#include<stdio.h>
int main()
{
    float temp1, temp2;
    int c;
    printf("To convert temperature from centigrade to fahrenheit: Enter 1\n");
    printf("To convert temperature from fahrenheit to centigrade: Enter 2\n");
    scanf("%d",&c);
    printf("Enter the temperature:");
    scanf("%f",&temp1);
    if(c==1)
    {
        temp2=(9.0/5.0)*temp1+32;
        printf("Converted temperature: %fF",temp2);  
    }
    if(c==2)
    {
        temp2=(5.0/9.0)*(temp1-32);
        printf("Converted temperature: %fC",temp2);
    }
    return 0;
}