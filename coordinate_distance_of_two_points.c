#include<math.h>
#include<stdio.h>
int main()
{
double x1,x2,y1,y2,di,di1;
printf("Enter coordinate of x1 & y1:");
scanf("%lf %lf", &x1, &y1);
printf("Enter coordinate of x2 & y2:");
scanf("%lf %lf", &x2, &y2);
di=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
di1=sqrt(di);
printf("The distance between the two points= %lf",di1);
return 0;
}