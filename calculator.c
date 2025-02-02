#include<stdio.h>
int main()
{
    double n1,n2;
    char op;
    printf("CALCULATOR for two variables:\n (+ - * / operators are valid)\n");
    scanf("%lf %c %lf",&n1, &op, &n2);
    switch(op)
    {    
        case '+':
        printf("%lf+%lf = %lf",n1,n2,(n1+n2));
        break;
        case '-': 
        printf("%lf-%lf = %lf",n1,n2,(n1-n2));
        break;
        case '*':
        printf("%lf*%lf = %lf",n1,n2,(n1*n2));
        break;
        case '/':
        if(n2==0)
        printf("Invalid value at denominator");
        else
        printf("%lf/%lf = %lf",n1,n2,(n1/n2));
        break;
        default:
        printf("Invalid Input/Operator");       
    }
    return 0;

}