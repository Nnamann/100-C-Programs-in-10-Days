#include<stdio.h>
int main()
{   
    int ch;
    double amt=346543.05,w=0.0,dp=0.0;
    printf("\n\nWelcome to NATIONAL Bank\n");
    do
    {
    printf("\n\nTo CHECK BALANCE: PRESS 1\nTo DEPOSIT MONEY: PRESS 2\nTo WITHDRAW MONEY: PRESS 3\nTo EXIT: PRESS 0\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        printf("CURRENT BALANCE= Rs. %lf\n",amt);
        break;
        
        case 2:
        printf("Enter the deposit amount: Rs. ");
        scanf("%lf",&dp);
        if(dp<=0)
        printf("Invalid deposit amount\n");
        else
        {
            amt=amt+dp;
            printf("Current Balance= Rs. %lf",amt);
        }
        break;

        case 3:
        printf("Enter the withdrawl amount: Rs. ");
        scanf("%lf",&w);
        printf("Processing\n");
        if(w>amt)
        printf("Insufficient Balance\n");
        else if(w<=0)
        printf("Invalid Withdrawl Amount\n");
        else
        {
            amt=amt-w;
            printf("Remaining balance= Rs. %lf\n",amt);
        }
        break;

        case 0:
        printf("\n\nTHANK YOU FOR CHOOSING US AS YOUR TRUSTED BANK\n");
        break;
        default:
        printf("INVALID INPUT!\n");
    }
    w=0;
    dp=0;
    }
    while(ch!=0);
    return 0;
}
