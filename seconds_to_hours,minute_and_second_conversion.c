#include<stdio.h>
int main()
{
    int t,th,tm,t;
    printf("Enter the time in seconds: ");
    scanf("%d",&t);
     th=t/3600;
     tm=(t-th*3600)/60;
     t=t-th*3600-tm*60;
     printf("Time= %d hour, %d minute, %d second",th,tm,t);
    return 0;
}