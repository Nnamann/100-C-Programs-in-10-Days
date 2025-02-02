#include<stdio.h>
int main()
{
    int cl,ch=0;
    double bill=0.0;
    printf("Enter total number of calls made: ");
    scanf("%d",&cl);
    if(cl>0)
    {
    if(cl<=100)
    ch=1;
    else if(cl<=150)
    ch=2;
    else if(cl<=200)
    ch=3;
    else if(cl>200)
    ch=4;
    }
    switch(ch)
    {
        case 4:
        bill=bill+(cl-200)*0.4;
        cl=200;
        case 3:
        bill=bill+(cl-150)*0.5;
        cl=150;
        case 2:
        bill=bill+(cl-100)*0.6;
        cl=100;
        case 1:
        bill=bill+200;
        break;
        default:
        printf("Invalid Input");
    }
    printf("Total bill= Rs.%lf ",bill); 
    return 0;
}