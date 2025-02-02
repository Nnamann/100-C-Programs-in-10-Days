#include<stdio.h>
int main()
{
    double cp;
    int ch;
    printf("Enter the cost price: ");
    scanf("%lf",&cp);
    if(cp>=800)
    ch=1;
    else if(cp>=500)
    ch=2;
    else if(cp<500)
    ch=3;
    switch(ch)
    {
        case 1:
        printf("Discount =25%%");
        break;
        case 2:
        printf("Discount =20%%");
        break;
        case 3:
        printf("No Discount");
        break;
        default:
        printf("Invalid Input");
    }
    return 0;
}