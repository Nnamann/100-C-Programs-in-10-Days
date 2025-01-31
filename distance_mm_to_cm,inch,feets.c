#include<stdio.h>
int main()
{
  double d,c,i,f;
  printf("Enter the distance in mm: ");
  scanf("%lf",&d);
  c= d/10.0;
  i=c/2.5;
  f=i/12.0;
  printf("Distance in:\n");
  printf("cm= %lf\n",c);
  printf("inch=%lf\n",i);
  printf("feet=%lf",f);
  return 0;
}