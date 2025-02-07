//Alternate method in part 2


#include<stdio.h>
int main()
{
    char s[100];
    int i=0, asc;
    printf("Enter the sentence:\n");
    fgets(s,100,stdin);
    while(s[i]!='\0')
    {
        asc= (int) s[i];
        if(asc >=97 && asc<=122)
        asc-=32;
        s[i]= (char) asc;
        i++; 
    }
    printf("The converted sentence:\n");
    printf("%s",s);
    return 0;
}