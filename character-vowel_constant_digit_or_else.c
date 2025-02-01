#include<stdio.h>
int main()
{
    char ch;
    int asc,r=0;
    printf("Enter the charcter: ");
    scanf("%c",&ch);
    asc =(int)ch;
    if(asc>=65 && asc<=90)
    {
        if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        r=1;
        else
        r=2;
    }
    else if(asc>=97 && asc<=122)
    {
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        r=1;
        else
        r=2;

    }
    else if(ch=='1'||ch=='2'||ch=='3'||ch=='4'||ch=='5'||ch=='6'||ch=='7'||ch=='8'||ch=='9'||ch=='0')
    printf("The given character is a digit");
    else 
    printf("The given character is neither consonant or vowel or digits");
    if(r==1)
    printf("The given character is a vowel");
    else if(r==2)
    printf("The given character is a consonant");
    return 0;
}