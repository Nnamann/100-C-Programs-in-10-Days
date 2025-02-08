//Write a program to determine whether a substring (string 1) is in the main string or not. If present, return the pointer of the first occurrence.
#include<string.h>
#include<stdio.h>
int main()
{   
    int i,j,l1,l2,p=999;
    char st[100];
    printf("Enter a string:\n");
    fgets(st,100,stdin);
    char sb[99];
    printf("Enter the sub-string to look for: ");
    scanf("%s",sb);
    l1=strlen(st);
    l2=strlen(sb);
    for(i=0;i<l1;i++)
    {
        if(st[i]==sb[0])
        {   
            int k=i,x=0;
            for(j=0;j<l2;j++)
            {
                if(sb[j]==st[k++])
                   x++;
            }
            if(x==l2)
            {
                p=i;
                break;    //exits the outer loop
            }
        }    
    }
    if(p!=999)
    printf("\nGiven sub-string= %s exists in the string\nFirst Occurence of substring is at position= %d\nMEMORY LOCATION of first occurence= %p\n",sb,p,&(st[p]));
    else
    printf("\nGiven sub-string= %s doesn't exist in the string",sb);
    return 0;
}