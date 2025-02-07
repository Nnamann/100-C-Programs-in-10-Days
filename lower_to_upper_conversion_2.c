//Alternate method in part 1
// !!!When using the functions islower, toupper, tolower,etc, do not forget to include the header file  <ctype.h> 

#include<ctype.h>
#include<stdio.h>
int main()
{
    char s[100];
    printf("Enter the sentence:\n");
    fgets(s,100,stdin);
    for(int i=0;s[i]!='\0';i++)
    if(islower(s[i]))
    s[i]=toupper(s[i]);
    printf("\nConverted the sentence:\n");
    printf("%s",s);
    return 0;
}