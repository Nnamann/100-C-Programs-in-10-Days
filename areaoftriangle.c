#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,s;
    printf("Enter the three sides of triangle:\n");
    scanf("%lf %lf %lf",&a,&b,&c);
    if((a+b>c)&&(a+c>b)&&(b+c>a))
    {
        s=(a+b+c)/2.0;
        
        printf("The area of the traingle = %lf",(sqrt(s*(s-a)*(s-b)*(s-c))));    
    }
    else
    printf("Triangle not possible");
    return 0;
}