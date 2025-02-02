#include<stdio.h>
int main()
{
    int cl,ch; 
    double bill=0.0;
    printf("Enter total number of calls made: ");
    scanf("%d",&cl);
    if(cl>=1 && cl<=150)
    ch=1;
    else if(cl>150 && cl<=250)
    ch=2;
    else if(cl>250 && cl<=400)
    ch=3;
    else if(cl>400)
    ch=4;
    switch(ch)
    {
        case 4:
        bill=bill+(cl-400)*1.5;
        cl=400;
        case 3:
        bill=bill+(cl-250)*1.2;
        cl=250;
        case 2:
        bill=bill+(cl-150)*0.9;
        cl=150;
        case 1:
        bill=bill+0;
        break;
        default:
        printf("Invalid Input");
    }
    printf("Total bill= Rs.%lf ",bill);
    return 0;
}