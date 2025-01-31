#include<stdio.h>
int main()
{
    double r,a;
    printf("Enter the radius of the circle: ");
    scanf("%lf",&r);
    a=3.14*r*r;
    printf("The area of the given circle is %lf",a);
    return 0;

}