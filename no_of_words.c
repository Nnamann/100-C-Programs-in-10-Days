//Write a program to count the number of words in a sentence.

#include<stdio.h>
#include<string.h>
int main()
{
    char s[151];
    int i,c=0;
    printf("Enter a sentence:\n");
    fgets(s,151,stdin);
    
    
    for(i=0;s[i]!='\0';i++)         //Removal of '\n' (WELL IN THIS SCENARIO NOT ACTUALLY REQUIRED)
    if(s[i]=='\n')                  //Here, used just as a practice, works absolutely fine without it.
    s[i]='\0';

    strcat(s," ");
    i=0;
    while(s[i]!='\0')
    {
        if(s[i]==' ')
        c++;
        i++;
    }
    printf("\nNo. of words in the given sentence= %d",c);
    return 0;
}