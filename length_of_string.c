//Write a program to find the string length of a string without using the predefined function.
//Used scanf() instead of fgets() just for practice. scanf() accepts only one string at a time, therefore not recommended.
//CAUTION NOTE: Avoid using scanf() and fgets() in the same code for input of string  and if using use fgets() before scanf() or the code might not run.



#include<stdio.h>
#include<string.h>
int main()
{
    char w[20];
    int l=0;
    printf("Enter a string(single word):\n");
    scanf("%s",w);
    for(int i=0; w[i]!='\0';i++)
    l++;
    printf("Length of the word= %d\n",l);
    return 0;
}