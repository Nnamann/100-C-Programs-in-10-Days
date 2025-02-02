#include<stdio.h>
int main()
{
    int u,ch; 
    double bill=0.0;
    printf("Enter total number of units consumed: ");
    scanf("%d",&u);
    if(u>=1 && u<=100)
    ch=1;
    else if(u>100 && u<=200)
    ch=2;
    else if(u>200 && u<=400)
    ch=3;
    else if(u>400)
    ch=4;
    switch(ch)
    {
        case 4:
        bill=bill+(u-400)*3.5;
        u=400;
        case 3:
        bill=bill+(u-200)*2.5;
        u=200;
        case 2:
        bill=bill+(u-100)*1.5;
        u=100;
        case 1:
        bill=bill+0;
        break;
        default:
        printf("Invalid Input");
    }
    printf("Total bill= Rs.%lf ",bill);
    return 0;
}