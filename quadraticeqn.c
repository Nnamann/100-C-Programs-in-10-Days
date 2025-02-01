#include<math.h>
#include<stdio.h>
#include<complex.h>
int main()
{
    double a,b,c,D,r1,r2;
    printf("Enter the coefficients a,b and c:\n");
    scanf("%lf %lf %lf",&a,&b,&c);
    D=b*b-4*a*c;
    if(a!=0)
    {
    if(D>0)
    {
     r1=(-b+sqrt(b*b-4.0*a*c))/(2.0*a);
     r2=(-b-sqrt(b*b-4.0*a*c))/(2.0*a);
     printf("The roots are real and disctinct: roots= %lf & %lf",r1,r2);
    }
    else if(D==0)
    {
    r1=(-b+sqrt(b*b-4.0*a*c))/(2.0*a);
    r2=(-b-sqrt(b*b-4.0*a*c))/(2.0*a);
    printf("The roots are real and equal: roots = %lf & %lf",r1,r2);
    //another way to do so: r1=r2=-b/(2.0*a); or r1=r2=(-b-sqrt(b*b-4.0*a*c))/(2.0*a);
    }
    else
    {
    r1=-b/(2.0*a);
    r2=sqrt(-D)/(2.0*a);
    printf("The roots are complex and imaginary:\n Real part= %lf \n Imaginary part=%lfi",r1,r2);
    }
    }
    else 
    printf("Invalid coefficient");
    return 0;
}