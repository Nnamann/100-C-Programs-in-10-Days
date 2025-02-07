// Write a program to concatenate,length,copy two strings using the library function.

#include<stdio.h>
#include<string.h>
int main()
{
    char s1[101],s2[50],s3[101];
    printf("Enter string1:\n");
    fgets(s1,50,stdin);
    printf("Enter string2:\n");
    fgets(s2,50,stdin);
    {                                         // removal of '/n' 
    for(int i=0; s1[i]!='\0';i++)             // a required process while using fgets(), because when using fgets(), as '\n' might be might be present at the end of the string, which leads to addition of '\n', in between of the newly concatenated string, also.
    if(s1[i]=='\n')
    s1[i]='\0';
    }
    for(int i=0; s2[i]!='\0';i++)             
    if(s2[i]=='\n')
    s2[i]='\0';
    
    strcat(s1,s2);
    printf("CONCATENATED STRING:\n");
    printf("%s",s1);
    strcpy(s3,s1);
    printf("\nString3 (copied)= %s\nlength=  %lu",s3,strlen(s3));     // strlen() doesn't return int value. It returns unassingned long value.(format specifier= %lu).  
    strcpy(s2,"juan");
    printf("\n2nd Copied string= %s",s2);
    return 0;
}