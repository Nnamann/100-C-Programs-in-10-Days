//Write a function Sort for sorting a list of names which will use a function compare to compare two names. (Selection /bubble Sort may be used).

#include<stdio.h>
#include<string.h>
int sort(char *p1, char *p2)
{
    if(strcasecmp(p1,p2)<=0)
    return 1;
    else 
    return -1;   
}
int main()
{
    int i,j,n;
    char temp[60];
    printf("Enter total number of names to input in list: ");
    scanf("%d",&n);
    char st[n][60];
    getchar();                                   //to clear the new line obtained from scanf used before, which would hinder the use of scanf for second time.
    printf("Enter The Names:\n");
    for(i=0;i<n;i++)
    scanf("%s",st[i]);
   
   for(i=0;i<n-1;i++)
   {
    for(j=0;j<n-i-1;j++)
    {
        if(sort(st[j],st[j+1])<=0)
        {
            strcpy(temp,st[j]);
            strcpy(st[j],st[j+1]);
            strcpy(st[j+1],temp);
        }
    }    
   }
    printf("\n");
    for(i=0;i<n;i++)   
    printf("%s\n",st[i]);
    return 0; 
}
