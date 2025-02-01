#include<stdio.h>
int main()
{
    int s;
    printf("Enter the score (between 0-10): ");
    scanf("%d",&s);
    if(s>10)
    printf("Invalid score");
    else if(s>=9)
    printf("A");
    else if(s>=7)
    printf("B");
    else if(s>=5)
    printf("C");
    else if(s>=3)
    printf("D");
    else
    printf("F");
    return 0;
}