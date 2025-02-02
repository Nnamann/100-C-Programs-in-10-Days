#include<stdio.h>
#include<math.h>
    int main()
    {
    double l1,l2,l3,s;
    int c;
    printf("To calculate area of circle(press1),rectangle(press2),triangle(press3); ");
    scanf("%d",&c);
    switch(c)
    {
        case 1:
        printf("Enter the radius of circle: ");
        scanf("%lf",&l1);
        printf("Area of circle= %lf",(3.14*l1*l1));
        break;
        case 2:
        printf("Enter the length and breadth of rectangle:\n ");
        scanf("%lf %lf",&l1, &l2);
        printf("The area of rectangle= %lf",(l1*l2));
        break;
        case 3:
        printf("Enter the length of three sides of triangle:\n");
        scanf("%lf %lf %lf",&l1, &l2, &l3);
        s=(l1+l2+l3)/2.0;
        printf("The area of triangle= %lf",(sqrt(s*(s-l1)*(s-l2)*(s-l3))));
        break;
        default:
        printf("Invalid Input");
    }
}