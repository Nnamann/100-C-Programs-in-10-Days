//Write a program to find the factorial of a number using a function.
#include<stdio.h>
int fact(int x);  //The function called in main should have the exactly the same declaration as when called.(THE BETTER WAY TO DO THIS IS TO WRITE THE MAIN FUNCTION AT LAST)
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("\n%d! = %d\n",num,fact(num));
 return 0;
}
    
    int fact(int x)
{   
    
    if(x==0)    //Clearly an unwanted addition, even without this f would return 1 for num=0.
    return 1;

    int f=1;
    for(int i=1;i<=x;i++)
        f*=i;
    return f;
}
